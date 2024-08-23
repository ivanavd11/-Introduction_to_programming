#include <iostream>

void convertNumber(long& n)
{
	long number = 0;
	while (n != 0)
	{
		number = number * 10 + n % 10;
		n /= 10;
	}

	n = number;
}

long newNum(long num)
{
	convertNumber(num);

	long result = 0;
	while (num != 0)
	{
		long digit = num % 10;
		if (digit % 2 == 0)
		{
			result = result * 10 + digit;
		}
		num /= 10;
	}
	return result;
}

int main()
{
	long num = 5783932;
	std::cout << newNum(num);
	return 0;
}