#include <iostream>

void returnToBinary(int number)
{
    const int BITS = sizeof(number) * 8; // Определяме броя на битовете (обикновено 32 за int)

    bool leadingZero = true; // Флаг, който следи дали сме преминали през водещите нули

    // Проверяваме всеки бит от най-старшия до най-младшия
    for (int i = BITS - 1; i >= 0; --i) {
        // Извличаме текущия бит
        if ((number & (1 << i)) != 0) {
            // Ако битът е 1, отпечатваме 1
            std::cout << "1";
            leadingZero = false;
        }
        else {
            // Ако битът е 0 и все още сме на водещи нули, не печатаме нищо
            if (!leadingZero) {
                std::cout << "0";
            }
        }
    }

    // Ако всичките битове са били 0, отпечатваме само една 0
    if (leadingZero) {
        std::cout << "0";
    }

    std::cout << std::endl;
}

int main()
{
	int number = 0;
	std::cin >> number;
    returnToBinary(number);
	return 0;
}