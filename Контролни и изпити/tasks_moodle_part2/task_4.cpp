#include <iostream>

int counterOfDigit(long num)
{
	int counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

int DigitPos(long num, int k)
{
	int digits = counterOfDigit(num);
	if (digits < k)
		return -1;

	while (num!=0)
	{
		int digit = num % 10;
		if (digits == k)
		{
			return digit;
		}
		digits--;
		num /= 10;
	}
	return -1;
}

int main()
{
	long num = 167925;
	int k = 3;
	std::cout << DigitPos(num, k);
	return 0;
}