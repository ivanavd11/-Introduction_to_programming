#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	int factoriel = 1;
	for (int i = 1; i <= n; i++)
	{
		factoriel *= i;
	}
	std::cout << factoriel;
	return 0;
}