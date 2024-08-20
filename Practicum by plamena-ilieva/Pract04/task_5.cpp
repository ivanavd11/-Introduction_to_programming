#include <iostream>

int counterOfDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return counter;
}

int reverse(int n)
{
	int result = 0;
	while (n != 0)
	{
		result = result * 10 + n % 10;
		n /= 10;
	}
	return result;
}

int kDigitInN(int n, int k)
{
	int counter = counterOfDigit(n);
	if (counter < k)
	{
		return -1;
	}
	//int reverseNumber = reverse(n);
	int digit = 0;
	do
	{
		digit = n % 10;
		n /= 10;
		counter--;
	} while (counter >= k);
	return digit;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << kDigitInN(n, k);
	return 0;
}