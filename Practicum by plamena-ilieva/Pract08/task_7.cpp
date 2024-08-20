#include <iostream>

int changeBitOnPosition(int n, int p)
{
	int newN = n;
	newN = newN >> p;
	//1
	if (newN & 1)
	{
		return n & ~(1 << p);
	}
	else
	{
		return n | (1 << p);
	}
}

int main()
{
	int n, p;
	std::cin >> n >> p;
	std::cout << changeBitOnPosition(n, p);
	return 0;
}