#include <iostream>

int counterOfDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return counter;
}

int returnToNumber(int n)
{
	int number = 0;
	int last_digit = 0;
	int base = 1;
	while (n > 0)
	{
		last_digit = n % 10;
		number = number + last_digit * base;
		n /= 10;
		base *= 2;
	}

	return number;
}
int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << returnToNumber(n);
	return 0;
}