#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i == 1 && j == 1) ||
				(i == 1 && j == n) ||
				(i == n && j == 1) ||
				(i == n && j == n))
			{
				std::cout << " +";
			}
			else if ((j == 1 && i != 1 && i != n)||
					(j==n && i != 1 && i != n)	)
			{
				std::cout << " |";
			}
			else
			{
				std::cout << " -";
			}
		}
		std::cout << "\n";
	}

	return 0;
}