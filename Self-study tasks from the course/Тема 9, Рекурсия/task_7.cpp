#include <iostream>

int sumOfDigits(int n)
{
	if (n < 10)
	{
		return n;
	}

	return n % 10 + sumOfDigits(n / 10);
}

int main()
{
	int n = 123456;
	std::cout << sumOfDigits(n);
	return 0;
}