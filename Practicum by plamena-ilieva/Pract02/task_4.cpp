#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	//upper to lower
	if (ch >= 'A' && ch <= 'Z')
	{
		char result = (ch - 'A') + 'a';
		std::cout << result;
	}
	//lower to upper
	else if (ch >= 'a' && ch <= 'z')
	{
		char result = (ch - 'a') + 'A';
		std::cout <<result ;
	}
	else
	{
		std::cout << "Invalid character";
	}
	return 0;
}