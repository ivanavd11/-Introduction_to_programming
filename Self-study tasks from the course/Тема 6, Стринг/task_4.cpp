#include <iostream>

const int MAX_SIZE = 1000;

int myStrLen(char* str)
{
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

char toSmallLetter(char ch)
{
	return (ch - 'A' + 'a');
}
int main()
{
	char str[MAX_SIZE] = "";
	std::cin >> str;
	int size = myStrLen(str);
	for (int i = 0; i < size; i++)
	{
		std::cout << toSmallLetter(str[i]);
	}
	return 0;
}