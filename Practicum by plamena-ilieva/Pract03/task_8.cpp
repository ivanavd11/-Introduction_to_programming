#include <iostream>

bool isPrime(int a)
{
	if (a <= 1)
	{
		return false;
	}
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (isPrime(i) && isPrime(j) &&
				(i + j == n))
			{
				std::cout << n << " = " << i << " + " << j;
				std::cout << '\n';
			}
		}

	}
	return 0;
}