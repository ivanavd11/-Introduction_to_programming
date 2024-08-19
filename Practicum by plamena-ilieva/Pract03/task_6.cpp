#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int a=0;
	int sum = 0;
	while (a != -1)
	{
		std::cin >> a;
		if (a < n && a % 2 == 0)
		{
			sum += a;
		}
	}
	std::cout << sum;
	return 0;
}