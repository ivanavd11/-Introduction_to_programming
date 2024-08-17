#include <iostream>

int setBit(int num, int pos)
{
	int mask = (1 << pos);
	return (num | mask);
}

int main()
{
	int num = 21;
	int pos = 3;
	std::cout << setBit(num, pos);
	return 0;
}