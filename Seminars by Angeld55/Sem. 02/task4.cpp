#include <iostream>

int main()
{
	char symbol;
	std::cin >> symbol;
	if (symbol == 's')
	{
		double a;
		std::cin >> a;
		std::cout << a * a;
	}
	else if (symbol == 'r')
	{
		double a, b = 0;
		std::cin >> a >> b;
		std::cout << a * b;
	}
	else if (symbol == 'c')
	{
		double r;
		std::cin >> r;
		std::cout << 3.14 * r * r;
	}
	else if (symbol == 't')
	{
		double a, h;
		std::cin >> a >> h;
		std::cout << a * h / 2;
	}
	else
	{
		std::cout << "Invalid symbol";
	}
	return 0;
}