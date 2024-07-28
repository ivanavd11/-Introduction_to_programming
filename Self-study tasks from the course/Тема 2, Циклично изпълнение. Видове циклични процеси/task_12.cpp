#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	bool isPrime = true;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
		}
	}
	if (isPrime)
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}