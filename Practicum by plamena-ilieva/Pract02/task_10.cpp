#include <iostream>

int main()
{
	double a, b;
	char symbol;
	std::cin >> a >> symbol >> b;
	if (symbol == '+')
	{
		std::cout << a + b;
	}
	else if (symbol == '-')
	{
		std::cout << a - b;
	}
	else if (symbol == '*')
	{
		std::cout << a * b;
	}
	else if (symbol == '/')
	{
		std::cout << a / b;
	}
	else
	{
		std::cout << "Invalid operation";
	}
	return 0;
}