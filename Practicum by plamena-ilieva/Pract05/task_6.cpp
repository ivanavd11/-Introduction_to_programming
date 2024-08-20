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

int counterOfDivisible(int n)
{
	int counter = 0;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i) && n % i == 0)
		{
			counter++;
		}
	}
	return counter;
}

void function(int& a, int& b, int k)
{
	int min = a;
	int max = a;

	for (int i = a; i <= b; i++)
	{
		if (counterOfDivisible(i) == k)
		{
			if (i > max)
			{
				max = i;
			}
			if (i < min)
			{
				min = i;
			}
		}
	}

	a = min;
	b = max;
}


int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;
	function(a, b, k);
	std::cout << a << " " << b;
	return 0;
}