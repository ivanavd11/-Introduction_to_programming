#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int a = 0;
	int max = 0;
	int max2 = 0;
	while (n != 0)
	{
		std::cin >> a;
		if (a > max)
		{
			max2 = max;
			max = a;
		}
		else if (a > max2)
		{
			max2 = a;
		}

		n--;
	}
	std::cout << max << " " << max2;
	return 0;
}