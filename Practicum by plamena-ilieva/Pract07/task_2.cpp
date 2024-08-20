#include <iostream>

constexpr int SIZE = 100;

void input(char str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> str[i];
	}
}

void newString(char str[], int size, int k)
{
	int borrow = 1;  // ��������� � borrow = 1, ������ ��������� 1 �� �������

	for (int i = size - 1; i >= 0; --i) {
		int digit = str[i] - '0';  // ������������� ������� � �����
		int newValue = digit - borrow;

		if (newValue < 0) {
			str[i] = (k + newValue) + '0';  // ��� ���������� � �����������, ������� �� ��������� ������
			borrow = 1;  // ����� �������, ������ borrow ������ 1
		}
		else {
			str[i] = newValue + '0';  // ��� ���� �������, ������ ����������� ���������
			borrow = 0;  // ���� �������, ������ ������������ ���������
			break;  // ���� ����� �� ������������, ��� ���� �������
		}
	}

}

int main()
{
	int size;
	std::cin >> size;
	char str[SIZE] = "";
	input(str, size);
	int k;
	std::cin >> k;
	newString(str, size, k);
	std::cout << str;

	return 0;
}