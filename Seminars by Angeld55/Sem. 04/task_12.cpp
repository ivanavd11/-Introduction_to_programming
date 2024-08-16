#include <iostream>

bool isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int main()
{
	char ch;
	std::cin >> ch;
	if (isDigit(ch))
	{
		std::cout << ch - '0';
	}
	else
	{
		std::cout << -1;
	}
	return 0;
}