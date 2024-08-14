#include <iostream>

int sumOfDigit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}
int main()
{
	int n = 0;
	std::cin >> n;
	if (n >= 0)
	{
		std::cout << sumOfDigit(n);
	}
	else
	{
		std::cout << "Invalid number";
	}
	return 0;
}