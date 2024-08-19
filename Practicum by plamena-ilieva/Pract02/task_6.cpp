#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	if (num == 0)
	{
		std::cout << "zero";
	}
	else if (num % 2 == 0)
	{
		std::cout << "even";
	}
	else
	{
		std::cout << "odd";
	}
	return 0;
}