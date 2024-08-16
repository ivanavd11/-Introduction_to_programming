#include <iostream>

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int main()
{
	char ch;
	std::cin >> ch;
	if (isUpper(ch))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}