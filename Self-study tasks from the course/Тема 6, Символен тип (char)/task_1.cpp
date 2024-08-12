#include <iostream>

char returnToChar(int n)
{
	char ch = n;
	return ch;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << returnToChar(n);
	return 0;
}