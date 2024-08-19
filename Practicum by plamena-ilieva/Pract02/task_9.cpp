#include <iostream>

int main()
{
	int day, mount, year;
	std::cin >> day >> mount >> year;
	if (day > 0 && day <= 31 && mount > 0 && mount <= 12
		&& year > 1000)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}