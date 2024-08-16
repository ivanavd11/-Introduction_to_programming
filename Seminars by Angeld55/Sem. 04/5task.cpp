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

bool isPrefics(int n, int k)
{
	if (k > n)
	{
		return false;
	}

	int reverseN = reverseNumber(n);
	int reverseK = reverseNumber(k);

	while (reverseK != 0)
	{
		int digit = reverseK % 10;
		if (digit != reverseN % 10)
		{
			return false;
		}
		reverseK /= 10;
		reverseN /= 10;
	}
	return true;

}

int main()
{
	int n, k;
	std::cin >> n >> k;
	if (isPrefics(n, k))
	{
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
	return 0;
}