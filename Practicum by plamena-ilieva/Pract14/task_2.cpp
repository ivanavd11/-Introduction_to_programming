#include <iostream>

bool isInNumber(int n, int k)
{
	if (n == 0)
	{
		return false;
	}
	if ((n % 10) == k)
	{
		return true;
	}
	n /= 10;
	return isInNumber(n, k);
}

int main()
{
	int n = 1258626;
	int k = 2;
	std::cout << isInNumber(n, k);
	return 0;
}