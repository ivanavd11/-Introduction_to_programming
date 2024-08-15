#include <iostream>

int sumOfDigit(int n)
{
	if (n <= 9)
	{
		return n;
	}
	int digit = n % 10;
	n = n / 10;
	return digit + sumOfDigit(n);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << sumOfDigit(n);
	return 0;
}