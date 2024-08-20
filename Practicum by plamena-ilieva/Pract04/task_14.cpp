#include <iostream>

int sortDigits(int n) {
    int sortedNumber = 0;
    int multiplier = 1;

    while (n > 0) {
        int minDigit = 9;
        int remainingNumber = 0;
        int tempMultiplier = 1;

        // ������ ���-������� ����� � �������� �����
        while (n > 0) {
            int digit = n % 10;
            if (digit < minDigit) {
                minDigit = digit;
            }
            n /= 10;
        }

        // ���������� ������� ��� ���-������� �����
        while (n > 0 || tempMultiplier < multiplier) {
            int digit = n % 10;
            if (digit != minDigit || tempMultiplier < multiplier) {
                remainingNumber += digit * tempMultiplier;
                tempMultiplier *= 10;
            }
            else {
                minDigit = -1; // ���������� �� �� �������� �������� �������� �� ������ �����
            }
            n /= 10;
        }

        // ������ ����������� ����� ��� ������ ��������� �����
        sortedNumber += minDigit * multiplier;
        multiplier *= 10;

        // �������� � ���������� �����
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