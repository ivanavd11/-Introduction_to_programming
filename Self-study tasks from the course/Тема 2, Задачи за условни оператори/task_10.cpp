#include <iostream>

bool valid(int a, int b)
{
	if (a < 0 || a>13 || b < 0 || b>13) return false;
	else return true;
}

bool blackDjeck(int a, int b)
{
	int num = a + b;
	if (num < 21) return false;
	else return true;
}
int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	if (valid(a, b))
	{
		if (blackDjeck(a, b))
		{
			std::cout << "True";
		}
		else
		{
			std::cout << "False";
		}
	}
	else
	{
		std::cout << "Invalid input.\n";
	}
	return 0;
}