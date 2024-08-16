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

bool isPalindrome(int n)
{
	int reverse = reverseNumber(n);
	if (reverse == n)
	{
		return true;
	}
	return false;
}
int main()
{
	int n;
	std::cin >> n;
	if (isPalindrome(n))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}