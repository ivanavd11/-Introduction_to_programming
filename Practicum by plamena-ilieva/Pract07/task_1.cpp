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
	int carry = 1;  // ��������� � carry = 1, ������ �������� 1 ��� �������

	for (int i = size - 1; i >= 0; --i) {
		int digit = str[i] - '0';  // ������������� ������� � �����
		int newValue = digit + carry;
		str[i] = (newValue % k) + '0';  // ������������� ������� � ������
		carry = newValue / k;

		if (carry == 0) {
			break;  // ���� ����� �� ������������, ��� ���� ���������
		}
	}

}

int main()
{
	char str[SIZE] = {};
	int size;
	std::cin >> size;
	input(str, size);
	int k;
	std::cin >> k;
	newString(str, size, k);
	std::cout << str;
	return 0;
}