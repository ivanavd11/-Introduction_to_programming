#include <iostream>

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

#define BEG 'A'
#define END 'Z'

int main()
{
	char ch;
	std::cin >> ch;
	if (isUpper(ch))
	{
		char symmetric = BEG + (END - ch);
		std::cout << symmetric;
	}
	else
	{
		std::cout << "Invalid input";
	}
	return 0;
}