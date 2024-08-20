#include <iostream>

void splitNumberByPosition(int n, int& evenPosNum, int& oddPosNum) {
    evenPosNum = 0;  // ����� �� ������� �� ����� �������
    oddPosNum = 0;   // ����� �� ������� �� ������� �������

    int currentPos = 1;  // ��������� �� ������� ������� (���-������� �����)
    int evenMultiplier = 1;  // ������������� �� ������� � ������� �������
    int oddMultiplier = 1;   // ������������� �� ������� � ��������� �������

    while (n > 0) {
        int digit = n % 10;  // ������� ���������� �����
        if (currentPos % 2 == 0) {
            evenPosNum += digit * evenMultiplier;
            evenMultiplier *= 10;  // ����������� �������������� �� ���������� �����
        }
        else {
            oddPosNum += digit * oddMultiplier;
            oddMultiplier *= 10;  // ����������� �������������� �� ���������� �����
        }
        n /= 10;  // ���������� ���������� ����� �� �������
        currentPos++;
    }
}

int main()
{
	int n;
	std::cin >> n;

    int evenPosNum, oddPosNum;
    splitNumberByPosition(n, evenPosNum, oddPosNum);

    std::cout << evenPosNum << " " << oddPosNum;
	return 0;
}