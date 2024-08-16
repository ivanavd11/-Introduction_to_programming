#include <iostream>

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int counterOfDigit(int a,int b, int k)
{
	int counter = 0;
	for (int i = a; i <= b; i++)
	{
		int counterOfDeliteli = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0 && isPrime(j))
			{
				counterOfDeliteli++;
			}
		}
		if (counterOfDeliteli == k)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;
	std::cout << counterOfDigit(a, b, k);
	return 0;
}