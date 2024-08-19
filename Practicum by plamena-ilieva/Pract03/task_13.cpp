#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n * 2 + 3; i++)
	{
		for (int j = 1; j <= n + 2; j++)
		{
			if (i == 1 || i == n * 2 + 3)
			{
				std::cout << "#";
			}
			else if (j == 1 || j == n + 2)
			{
				std::cout << "#";
			}
			else if (i > 1 && i < n + 2)
			{
				std::cout << j;
			}
			else if (i == n + 2)
			{
				std::cout << "X";
			}
			else if (i > n + 2 && i < n * 2 + 3)
			{
				std::cout << j;
			}

		}
		std::cout << '\n';
	}
	return 0;
}