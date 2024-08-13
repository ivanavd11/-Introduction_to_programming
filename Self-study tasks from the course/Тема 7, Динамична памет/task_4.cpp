#include <iostream>

int main()
{
	int a;
	std::cin >> a;

    if (a == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    char binary[32]; // Масив за съхранение на двоичния запис
    int index = 0;

    // Извличане на двоичния запис
    while (a > 0) {
        binary[index++] = (a % 2) + '0'; // Записваме цифрата като символ
        a /= 2;
    }

    // Извеждане на двоичния запис в правилния ред
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binary[i];
    }

    std::cout << std::endl;

	return 0;
}