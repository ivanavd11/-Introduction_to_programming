#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	int minNumber = (a > b) ? b : a;
	for (int i = minNumber; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			std::cout << i << " ";
		}
	}
	return 0;
}