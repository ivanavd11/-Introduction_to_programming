#include <iostream>

int removeMiddleDigits(int num)
{
    int digitCount = 0;
    int temp = num;
    int divisor = 1;

    // ����������� �� ������� � �������
    while (temp > 0) {
        digitCount++;
        temp /= 10;
        if (digitCount >= 1) {
            divisor *= 10; // ������ ������� �� ���������� �� �������
        }
    }

    if (digitCount == 1) {
        return 0; // ��� ������� � ���� ���� �����, ���������� � 0
    }

    int leftPart, rightPart;
    int middleStart = digitCount / 2;

    if (digitCount % 2 == 0) {
        // ���������� �� �������� ��� �����
        leftPart = num / (divisor / 1); // ������ ���� �� �������
        rightPart = num % (divisor / 100); // ������� ���� ���� �������
    }
    else {
        // ���������� �� �������� �����
        leftPart = num / (divisor / 10); // ������ ���� �� �������
        rightPart = num % (divisor / 10); // ������� ���� ���� �������
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