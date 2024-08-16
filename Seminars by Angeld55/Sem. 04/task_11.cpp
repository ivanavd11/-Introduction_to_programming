#include <iostream>

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int main()
{
	char ch;
	std::cin >> ch;
	if (isLower(ch))
	{
		char upper = (ch - 'a') + 'A';
		std::cout << upper;
	}
	else
	{
		std::cout << "Error";
	}
	return 0;
}