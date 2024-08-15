#include <iostream>

int main()
{
	int number = 0;
	std::cin >> number;
	if (number < 100)
	{
		std::cout << "Less than 100";
	}
	else if (number >= 100 && number <= 200)
	{
		std::cout << "Between 100 and 200";
	}
	else
	{
		std::cout << "Greater than 200";
	}
	return 0;
}