#include <iostream>

void ConvertNum(long&n)
{
	long reverse = 0;

	while (n != 0)
	{
		long digit = n % 10;
		reverse = reverse * 10 + digit;
		n /= 10;
	}

	n = reverse;
}

int main()
{
	long n = 123;
	ConvertNum(n);
	std::cout << n;
	return 0;
}