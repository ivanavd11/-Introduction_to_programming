#include <iostream>

int main()
{
	int n, m = 0;
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m; j++)
		{
			std::cout << "(" << i << ", " << j << ") ";

		}
		std::cout << "\n";
	}
	return 0;
}