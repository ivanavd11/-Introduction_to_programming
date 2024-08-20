#include <iostream>

int convertCharToInt(char ch)
{
	return ch - '0';
}

char convertIntToChar(int n)
{
	return n + '0';
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << convertIntToChar(n);
	return 0;
}