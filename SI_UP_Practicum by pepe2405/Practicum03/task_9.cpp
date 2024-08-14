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
	int n = 0;
	std::cin >> n;
	for (int i = 2; i < n; i++)
	{
		if (isPrime(i))
		{
			std::cout << i << " ";
		}
	}
	return 0;
}