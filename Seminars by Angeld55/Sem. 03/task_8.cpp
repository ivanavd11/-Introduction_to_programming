#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "$ ";
		}
		std::cout << "\n";
	}
	return 0;
}