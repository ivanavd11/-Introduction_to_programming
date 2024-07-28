#include <iostream>

int main()
{
	int n, m = 0;
	std::cin >> n;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> m;
		if (max < m)
		{
			max = m;
		}
	}
	std::cout << max;
	return 0;
}