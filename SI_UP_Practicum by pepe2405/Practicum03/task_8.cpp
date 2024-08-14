#include <iostream>

int sumOfDeliteli(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

bool isPerfect(int n)
{
	int sum = sumOfDeliteli(n);
	if (sum == n)
	{
		return true;
	}
	return false;
}
int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (isPerfect(i))
		{
			std::cout << i << " ";
		}
	}
	return 0;
}