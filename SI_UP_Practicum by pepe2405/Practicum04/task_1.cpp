#include <iostream>

char toUpper(char ch)
{
	return ((ch - 'a') + 'A');
}
char toLower(char ch)
{
	return ((ch - 'A') + 'a');
}
int main()
{
	char ch;
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		std::cout << toUpper(ch);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		std::cout << toLower(ch);
	}
	else
	{
		std::cout << "Not a letter";
	}
	return 0;
}