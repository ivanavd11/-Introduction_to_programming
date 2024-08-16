#include <iostream>

bool isSuffics(int n, int k)
{
	if (k > n)
	{
		return false;
	}
	int digit = 0;
	while (k != 0)
	{
		digit = k % 10;
		if (digit != n % 10)
		{
			return false;
		}
		n /= 10;
		k /= 10;
	}
	return true;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	if (isSuffics(n, k))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}