#include <iostream>

bool isPrime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	std::cin >> a;
	if (isPrime(a))
	{
		std::cout << "Prime";
	}
	else
	{
		std::cout << "Not prime";
	}
	return 0;
}