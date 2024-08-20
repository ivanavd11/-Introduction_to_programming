#include <iostream>
// ������� �� ��������� �� k-���� ����� �� �����
int getDigitAt(int number, int k) {
    for (int i = 1; i < k; i++) {
        number /= 10;  // ��������� ���������� ����� �� ����� ��������, ������ �� ��������� k-���� �����
    }
    return number % 10;  // ������� ���������� (k-��) �����
}

// ������� �� �������� �� ����� �� ������ ������� � �����
int setDigitAt(int number, int k, int newDigit) {
    int currentDigit;
    int multiplier = 1;
    int result = 0;
    int temp = number;

    for (int i = 1; i <= k; i++) {
        currentDigit = temp % 10;  // ������� ���������� �����
        if (i == k) {
            currentDigit = newDigit;  // ������ �� k-���� �����
        }
        result = currentDigit * multiplier + result;  // ����������� ������� � ������ �����
        temp /= 10;
        multiplier *= 10;
    }
    return result + temp * multiplier;  // �������� ���������� ���� �� �������
}

// ������� �� ��������� �� k-���� ����� �� ��� �����
void swapDigits(int& m, int& n, int k) {
    int digitM = getDigitAt(m, k);  // ������� k-���� ����� �� m
    int digitN = getDigitAt(n, k);  // ������� k-���� ����� �� n

    // �������� k-���� ����� �� m � k-���� ����� �� n � �������
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