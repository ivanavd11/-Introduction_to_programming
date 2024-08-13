#include <iostream>

int counterOfDigit(int n)
{
	if (n < 10)
	{
		return 1;
	}

	return 1 + counterOfDigit(n / 10);
}

int main()
{
	int n = 54321;
	std::cout << counterOfDigit(n);
	return 0;
}