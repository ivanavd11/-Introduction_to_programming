#include <iostream>

int myStrLen(char* str)
{
	if (!str)
		return 0;
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

int counterOfWords(char* str)
{
	int lenOfStr = myStrLen(str);
	int counter = 0;

	for (int i = 0; i < lenOfStr-1; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ') ||
			(str[i] == ' ' && str[i + 1] != ',') ||
			(str[i] == ' ' && str[i + 1] != '.') ||
			(str[i] == ' ' && str[i + 1] != '?') ||
			(str[i] == '?' && str[i + 1] != '?'))
		{
			counter++;
		}
	}

	return counter;
}

int main()
{
	char str[] = "Me? Why always me?";
	std::cout << counterOfWords(str);
	return 0;
}