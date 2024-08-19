#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			std::cout << i << " ";
		}
	}
	return 0;
}