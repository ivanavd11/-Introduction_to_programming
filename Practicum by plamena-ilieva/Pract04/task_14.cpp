#include <iostream>

int sortDigits(int n) {
    int sortedNumber = 0;
    int multiplier = 1;

    while (n > 0) {
        int minDigit = 9;
        int remainingNumber = 0;
        int tempMultiplier = 1;

        // Намери най-малката цифра в текущото число
        while (n > 0) {
            int digit = n % 10;
            if (digit < minDigit) {
                minDigit = digit;
            }
            n /= 10;
        }

        // Преизчисли числото без най-малката цифра
        while (n > 0 || tempMultiplier < multiplier) {
            int digit = n % 10;
            if (digit != minDigit || tempMultiplier < multiplier) {
                remainingNumber += digit * tempMultiplier;
                tempMultiplier *= 10;
            }
            else {
                minDigit = -1; // Използваме за да избегнем повторно добавяне на същата цифра
            }
            n /= 10;
        }

        // Добави минималната цифра към новото сортирано число
        sortedNumber += minDigit * multiplier;
        multiplier *= 10;

        // Продължи с останалите цифри
        n = remainingNumber;
    }

    return sortedNumber;
}

int main()
{
	int n;
	std::cin >> n;
    std::cout << sortDigits(n);
	return 0;
}