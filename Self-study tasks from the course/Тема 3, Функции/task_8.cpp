#include <iostream>

int calculate(const int a, const int b, char action)
{
	if (action == '+')
	{
		return a + b;
	}
	else if (action == '-')
	{
		return a - b;
	}
	else if (action == '/')
	{
		return a / b;
	}
	else if (action == '%')
	{
		return a % b;
	}
	else if (action == '*')
	{
		return a * b;
	}
	else
	{
		return a + b;
	}
}

int main()
{
	int a,b = 0;
	char action = ' ';
	std::cin >> a >> b >> action;
	std::cout << calculate(a, b, action);
	return 0;
}