#include <iostream>

int factoriel(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * factoriel(n - 1);
}

int main()
{
	int n;
	std::cin >> n;
	if (n > 0)
	{
		std::cout << factoriel(n);
	}
	else
	{
		std::cout << "Invalid number";
	}
	return 0;
}