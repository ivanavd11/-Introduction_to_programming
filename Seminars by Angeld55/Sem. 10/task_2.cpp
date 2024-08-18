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

void toUpper(char* str)
{
	int len = myStrLen(str);

	for (int i = 0; i < len; i++)
	{
		char ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			str[i] = (ch - 'a') + 'A';
		}
	}
}

void toLower(char* str)
{
	int len = myStrLen(str);

	for (int i = 0; i < len; i++)
	{
		char ch = str[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			str[i] = (ch - 'A') + 'a';
		}
	}
}

int main()
{
	char str[] = "asdf JDFV";
	toLower(str);
	std::cout << str;
	return 0;
}