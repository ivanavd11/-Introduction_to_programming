#include <iostream>

// Функция за събиране на две числа в K-ична бройна система
void addKSystem(char arr1[], char arr2[], int size, int K, char res[]) {
    int carry = 0;  // Започваме без пренасяне

    for (int i = size - 1; i >= 0; --i) {
        int digit1 = arr1[i] - '0';  // Преобразуваме символа в цифра от първия масив
        int digit2 = arr2[i] - '0';  // Преобразуваме символа в цифра от втория масив

        int sum = digit1 + digit2 + carry;  // Събираме цифрите и пренасянето
        res[i] = (sum % K) + '0';  // Останалата част от сумата записваме в резултата като символ
        carry = sum / K;  // Изчисляваме новото пренасяне
    }
}

int main()
{
    char arr1[] = { '1', '7', '5' };  // Първото число в K-ична бройна система
    char arr2[] = { '5', '3', '7' };  // Второто число в K-ична бройна система
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int K = 8;  // Основа на бройната система
    char res[3];  // Масив за резултата

    addKSystem(arr1, arr2, size, K, res);
    std::cout << res;
	return 0;
}