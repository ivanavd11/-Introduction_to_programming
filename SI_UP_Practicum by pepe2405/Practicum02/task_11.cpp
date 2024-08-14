#include <iostream>

bool isEven(int n)
{
	return (n % 2 == 0);
}

bool isOdd(int n)
{
	return (n % 2 != 0);
}
int main()
{
	int n = 0;
	std::cin >> n;
	int first, second;
	first = n / 100;
	second = n % 10 + ((n / 10) % 10) * 10;
	if (isEven(first) && isEven(second))
	{
		std::cout << "Even";
	}
	else if (isOdd(n) && isOdd(n))
	{
		std::cout << "Odd";
	}
	else
	{
		std::cout << "Neither even nor odd";
	}
	return 0;
}