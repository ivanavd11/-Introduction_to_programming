#include <iostream>

int reverseNumber(int n)
{
	int number = 0;
	while (n != 0)
	{
		number = number * 10 + (n % 10);
		n /= 10;
	}
	return number;
}

int concatWithReverse(int n)
{
	int reverse = reverseNumber(n);
	int original = n;
	int mult = 1;
	while (n >= 1)
	{
		mult *= 10;
		n /= 10;
	}
	return reverse * mult + original;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << concatWithReverse(n);
	return 0;
}