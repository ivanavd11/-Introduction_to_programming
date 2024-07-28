#include <iostream>

int main()
{
	int n = 0;
	int min = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;
		if (n > 0)
		{
			i--;
			continue;
		}
		if (min > n)
		{
			min = n;
		}
	}
	std::cout << min;
	return 0;
}