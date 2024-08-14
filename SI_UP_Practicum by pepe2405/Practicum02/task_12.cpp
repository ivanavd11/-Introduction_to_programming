#include <iostream>

int main()
{
	int a, b = 0;
	char ch;
	std::cin >> a >> b >> ch;
	if (ch == '\0')
	{
		std::cout << "There isn't operator";
	}
	else if (ch == '+')
	{
		std::cout << a + b;
	}
	else if (ch == '-')
	{
		std::cout << a - b;
	}
	else if (ch == '-')
	{
		std::cout << a - b;
	}
	else if (ch == '*')
	{
		std::cout << a * b;
	}
	else if (ch == '/')
	{
		std::cout << a / b;
	}
	else
	{
		std::cout << "Invalid operator";
	}
	return 0;
}