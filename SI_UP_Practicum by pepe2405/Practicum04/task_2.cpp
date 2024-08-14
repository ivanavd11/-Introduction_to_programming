#include <iostream>

bool isValid(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int convertToInt(char ch)
{
	return (ch - '0');
}
int main()
{
	char ch;
	std::cin >> ch;
	if (isValid(ch))
	{
		std::cout << convertToInt(ch);
	}
	else
	{
		std::cout << "Not a number";
	}
	return 0;
}