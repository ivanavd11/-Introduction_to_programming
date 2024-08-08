#include <iostream>

int ascii(const char symbol)
{
	return symbol;
}

int main()
{
	char ch = ' ';
	std::cin >> ch;
	std::cout << ascii(ch);
	return 0;
}