#include <iostream>

void returnToBinary(int number)
{
    const int BITS = sizeof(number) * 8; // ���������� ���� �� �������� (���������� 32 �� int)

    bool leadingZero = true; // ����, ����� ����� ���� ��� ��������� ���� �������� ����

    // ����������� ����� ��� �� ���-������� �� ���-�������
    for (int i = BITS - 1; i >= 0; --i) {
        // ��������� ������� ���
        if ((number & (1 << i)) != 0) {
            // ��� ����� � 1, ����������� 1
            std::cout << "1";
            leadingZero = false;
        }
        else {
            // ��� ����� � 0 � ��� ��� ��� �� ������ ����, �� �������� ����
            if (!leadingZero) {
                std::cout << "0";
            }
        }
    }

    // ��� �������� ������ �� ���� 0, ����������� ���� ���� 0
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