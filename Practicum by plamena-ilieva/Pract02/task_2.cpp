#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	int number = ch - '\0';
	std::cout << number;
	return 0;
}