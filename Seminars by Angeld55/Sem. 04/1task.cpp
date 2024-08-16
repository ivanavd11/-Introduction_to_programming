#include <iostream>

bool isPrime(unsigned n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned int n;
	std::cin >> n;

	for (int i = 6; i < n; i += 6)
	{
		if (isPrime(i - 1) && isPrime(i + 1))
			std::cout << i - 1 << " " 
			          << i + 1 << "\n";
	}
	return 0;
}