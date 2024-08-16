#include <iostream>

bool isSorted(int n)
{
	int last = n % 10;
	while (n != 0)
	{
		int digit = n % 10;
		if (last < digit)
		{
			return false;
		}
		last = digit;
		n /= 10;
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << isSorted(n);
	return 0;
}