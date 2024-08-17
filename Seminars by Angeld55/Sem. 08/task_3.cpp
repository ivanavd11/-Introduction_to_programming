#include <iostream>

int setToDifferentBit(int n)
{
	// ��������� �� ���-������ ���, ����� � 1
	int rightmostSetBit = n & (-n);

	// �������� �� ���� ���
	return n ^ rightmostSetBit;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << setToDifferentBit(n);
	return 0;
}