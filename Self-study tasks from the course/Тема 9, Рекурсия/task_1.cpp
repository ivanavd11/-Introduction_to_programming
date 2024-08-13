#include <iostream>

int fib(int n)
{
	if (n==1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}

	return fib(n - 2) + fib(n - 1);
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << fib(n);
	return 0;
}