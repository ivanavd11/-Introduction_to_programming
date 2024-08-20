#include <iostream>

char to_lower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 'a' + 'A';
	}
	return ch;
}

char to_upper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + 'a' - 'A';
	}
	return ch;
}

int main()
{
	char ch;
	std::cin >> ch;
	std::cout << to_upper(ch);
	return 0;
}