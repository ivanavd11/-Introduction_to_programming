#include <iostream>

bool isValid(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int numberOfAlfabet(char ch)
{
	return (ch - 64);
}
int main()
{
	char ch = ' ';
	std::cin >> ch;
	if (isValid(ch))
	{
		std::cout << numberOfAlfabet(ch);
	}
	else
	{
		std::cout << "Invalid input\n";
	}
	return 0;
}