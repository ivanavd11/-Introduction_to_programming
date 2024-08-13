#include <iostream>

int main()
{
	int a;
	std::cin >> a;

    if (a == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    char binary[32]; // ����� �� ���������� �� �������� �����
    int index = 0;

    // ��������� �� �������� �����
    while (a > 0) {
        binary[index++] = (a % 2) + '0'; // ��������� ������� ���� ������
        a /= 2;
    }

    // ��������� �� �������� ����� � ��������� ���
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binary[i];
    }

    std::cout << std::endl;

	return 0;
}