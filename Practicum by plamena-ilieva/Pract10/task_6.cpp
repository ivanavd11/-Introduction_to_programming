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

char toUpper(char ch)
{
	return (ch - 'a' + 'A');
}

bool isLetter(char ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
void newString(char* str)
{
	if (!str)
		return;
	int len = myStrLen(str);

	for (int i = 0; i < len; i++)
	{
		if (i == 0 )
		{
			str[i] = toUpper(str[i]);
		}
		else if (isLetter(str[i]) && (str[i - 1] == ',' || str[i - 1] == ' '))
		{
			str[i] = toUpper(str[i]);
		}
	}
}

int main()
{
	char str[] = "hello,  my friend!";
	newString(str);
	std::cout << str;

	return 0;
}