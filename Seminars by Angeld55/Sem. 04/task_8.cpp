#include <iostream>

bool isEqual(int n)
{
	int digit = n % 10;
	while (n != 0)
	{
		int number = n % 10;
		if (digit != number)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << isEqual(n);
	return 0;
}