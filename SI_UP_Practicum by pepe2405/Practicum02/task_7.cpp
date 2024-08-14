#include <iostream>

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int main()
{
	char ch;
	std::cin >> ch;
	if (isUpper(ch))
	{
		std::cout << "Upper case";
	}
	else if (isLower(ch))
	{
		std::cout << "Lower case";
	}
	else
	{
		std::cout << "Not a letter";
	}
	return 0;
}