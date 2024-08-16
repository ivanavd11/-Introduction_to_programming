#include <iostream>

int reverseNumber(int n)
{
	int number = 0;
	int digit = 0;
	while (n != 0)
	{
		digit = n % 10;
		n /= 10;
		number = number * 10 + digit;
	}

	return number;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << reverseNumber(n);
	return 0;
}