#include <iostream>

int counterOfDigits(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return counter;
}

int pow(int n)
{
	int temp = 1;
	while (n != 0)
	{
		n /= 10;
		temp = temp * 10;
	}
	return temp;
}

int reverseNumber(int n)
{
	int reverse = 0;
	while (n != 0)
	{
		reverse = reverse*10 + n % 10;
		n /= 10;
	}
	return reverse;
}

int newNumber(int n, int k)
{
	int counter = counterOfDigits(n);
	if (counter < k)
	{
		return -1;
	}
	int reverse = reverseNumber(n);
	int newNumber = 0;
	while (reverse != 0)
	{
		if (counter == k)
		{
			reverse /= 10;
			counter--;
			continue;
		}
		newNumber = newNumber * 10 + reverse % 10;
		reverse /= 10;
		counter--;
	}
	return newNumber;
	
}

int main()
{
	int n, k;
	std::cin >> n >> k;

	std::cout << newNumber(n, k);
	return 0;
}