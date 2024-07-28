#include <iostream>

int main()
{
	int sum = 0;
	int number = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> number;
		sum += number;
	}
	std::cout << sum;

	return 0;
}