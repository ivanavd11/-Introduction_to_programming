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

int reverseNumber(int n)
{
	int number = 0;
	while (n != 0)
	{
		number = number * 10 + n % 10;
		n /= 10;
	}
	return number;
}

void function(int& n, int k, int t)
{
	int counter = counterOfDigit(n);
	int newnumber = 0;
	int digit = 0;
	for (int i = 0; i < counter; i++)
	{
		digit = n % 10;
		n /= 10;
		if (i >= k && i <= t)
		{
			newnumber = newnumber * 10 + digit;
		}
	}
	n = reverseNumber(newnumber);
}

int main()
{
	int n, k, t;
	std::cin >> n >> k >> t;
	function(n, k, t);
	std::cout << n;
	return 0;
}