#include <iostream>

bool isInNumber(int n, int k)
{
	if (n == k)
	{
		return true;
	}
	if (n < k)
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
	int n, k;
	std::cin >> n >> k;
	std::cout << isInNumber(n, k);
	return 0;
}