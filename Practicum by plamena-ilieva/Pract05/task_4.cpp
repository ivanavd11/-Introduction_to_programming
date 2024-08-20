#include <iostream>
// Функция за извличане на k-тата цифра на число
int getDigitAt(int number, int k) {
    for (int i = 1; i < k; i++) {
        number /= 10;  // Изрязваме последната цифра на всяка итерация, докато не достигнем k-тата цифра
    }
    return number % 10;  // Връщаме последната (k-та) цифра
}

// Функция за задаване на цифра на дадена позиция в число
int setDigitAt(int number, int k, int newDigit) {
    int currentDigit;
    int multiplier = 1;
    int result = 0;
    int temp = number;

    for (int i = 1; i <= k; i++) {
        currentDigit = temp % 10;  // Вземаме последната цифра
        if (i == k) {
            currentDigit = newDigit;  // Замяна на k-тата цифра
        }
        result = currentDigit * multiplier + result;  // Построяваме числото с новата цифра
        temp /= 10;
        multiplier *= 10;
    }
    return result + temp * multiplier;  // Добавяме останалата част от числото
}

// Функция за разменяне на k-тите цифри на две числа
void swapDigits(int& m, int& n, int k) {
    int digitM = getDigitAt(m, k);  // Вземаме k-тата цифра на m
    int digitN = getDigitAt(n, k);  // Вземаме k-тата цифра на n

    // Заменяме k-тата цифра на m с k-тата цифра на n и обратно
    m = setDigitAt(m, k, digitN);
    n = setDigitAt(n, k, digitM);
}
int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    swapDigits(n, m, k);
    std::cout << n << " " << m;
	return 0;
}