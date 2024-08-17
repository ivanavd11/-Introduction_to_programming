#include <iostream>

int setBitValue(int num, int pos, int value)
{
    if (value == 0) {
        // ��� ���������� � 0, �������� ���� ���� ����� � �������� AND
        int mask = ~(1 << pos);
        num = num & mask;
    }
    else {
        // ��� ���������� � 1, �������� ���� ���� ����� � �������� OR
        int mask = 1 << pos;
        num = num | mask;
    }
    return num;

}

int main()
{
	int num = 29;
	int pos = 3;
	int value = 0;

	std::cout << setBitValue(num, pos, value);
	return 0;
}