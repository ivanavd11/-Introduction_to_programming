#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		int a;
		std::cin >> a;
		if (a % 2 == 0)
		{
			sum += a;
		}
	}
	std::cout << sum;
	
	return 0;
}