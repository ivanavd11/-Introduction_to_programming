#include <iostream>

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int myStrLen(char* str)
{
	if (!str)
		return false;
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

bool checkstr(char* str)
{
	if (!str)
		return false;

	int len = myStrLen(str);
	for (int i = 0; i < len-1; i++)
	{
		if (isLower(str[i]))
		{
			if (!isUpper(str[i + 1]))
			{
				return false;
			}
		}
		else if (isUpper(str[i]))
		{
			if (!isLower(str[i + 1]))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char str[] = "AsFgHj";
	std::cout << checkstr(str);
	return 0;
}