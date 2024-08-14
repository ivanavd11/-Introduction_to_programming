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

int sumOfPrimeNums(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	return sum;
}
int main()
{
	int start, end;
	std::cin >> start >> end;
	std::cout << sumOfPrimeNums(start, end);
	return 0;
}