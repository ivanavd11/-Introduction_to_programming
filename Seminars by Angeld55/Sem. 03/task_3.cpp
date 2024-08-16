#include <iostream>

int removeMiddleDigits(int num)
{
    int digitCount = 0;
    int temp = num;
    int divisor = 1;

    // Преброяване на цифрите в числото
    while (temp > 0) {
        digitCount++;
        temp /= 10;
        if (digitCount >= 1) {
            divisor *= 10; // Строим делител за намаляване на числото
        }
    }

    if (digitCount == 1) {
        return 0; // Ако числото е само една цифра, резултатът е 0
    }

    int leftPart, rightPart;
    int middleStart = digitCount / 2;

    if (digitCount % 2 == 0) {
        // Премахване на средните две цифри
        leftPart = num / (divisor / 1); // Лявата част до средата
        rightPart = num % (divisor / 100); // Дясната част след средата
    }
    else {
        // Премахване на средната цифра
        leftPart = num / (divisor / 10); // Лявата част до средата
        rightPart = num % (divisor / 10); // Дясната част след средата
    }

    return leftPart * (divisor / 100) + rightPart;
}

int main()
{
	int n;
	std::cin >> n;
    int newNumber = removeMiddleDigits(n);
    std::cout << newNumber << " " << newNumber + 1;
	return 0;
}