#include <iostream>

bool isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	for (int i = 2; i < b; i++)
	{
		if (i > a && isPrime(i))
		{
			std::cout << i << " ";
		}
	}
	return 0;
}