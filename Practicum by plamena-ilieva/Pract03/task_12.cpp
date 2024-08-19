#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
    // ����� ���� �� ����������
    for (int i = 1; i <= n; ++i) {
        // ������� ����: ������� �� 1 �� i
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // �������� ����� � �������
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; ++j) {
            std::cout << "  ";
        }

        // ������� ����: ������� �� i �� 1
        for (int j = i; j >= 1; --j) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    // ����� ���� �� ����������
    for (int i = n - 1; i >= 1; --i) {
        // ������� ����: ������� �� 1 �� i
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // �������� ����� � �������
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; ++j) {
            std::cout << "  ";
        }

        // ������� ����: ������� �� i �� 1
        for (int j = i; j >= 1; --j) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
	return 0;
}