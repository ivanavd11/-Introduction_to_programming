#include <iostream>

bool hasNoAdjacentBits(int n) {
    // ����������� ����� ��� � ������� �����
    while (n > 0) {
        // ��������� ������� ��� � ��������� ���
        int currentBit = n & 1;
        int nextBit = (n >> 1) & 1;

        // ��� ������� � ��������� ��� �� �������, ������� false
        if (currentBit == nextBit) {
            return false;
        }

        // ����������� �� � ���� ��� �������
        n = n >> 1;
    }

    // ��� �� ������� ������� ������� ������, ������� true
    return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (hasNoAdjacentBits(n))
	{
		std::cout << "True";
	}
	else
	{
		std::cout << "False";
	}
	return 0;
}