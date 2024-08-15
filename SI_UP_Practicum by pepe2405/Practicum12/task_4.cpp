#include <iostream>

int counterOfDigit(int n)
{
	if (n <= 9)
	{
		return 1;
	}
	n /= 10;
	return 1 + counterOfDigit(n);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << counterOfDigit(n);
	return 0;
}