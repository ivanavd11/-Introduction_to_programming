#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	int digit = 0;
	int number = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> digit;
		int ten = 1;
		for (int j = i+1; j < n; j++)
		{
			ten = ten * 10;
		}
		number = number + digit * ten;
	}
	std::cout << number;
	return 0;
}