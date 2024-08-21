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

bool isLetter(char ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int counterFirst(char* str, int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (isLetter(str[i]))
		{
			counter++;
		}
		else
		{
			break;
		}
	}
	return counter;
}

int counterOfLast(char* str, int len)
{
	int counter = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (isLetter(str[i]))
		{
			counter++;
		}
		else
		{
			break;
		}
	}
	return counter;
}

char* concatFirstLast(char* str)
{
	if (!str)
		return nullptr;
	int len = myStrLen(str);
	int firstWord = counterFirst(str, len);
	int lastWord = counterOfLast(str, len);
	int newSize = firstWord + lastWord + 1;
	char* result = new char[1 + newSize];

	int resultSize = 0;
	for (int i = 0; i < firstWord; i++)
	{
		if (isLetter(str[i]))
		{
			result[resultSize++] = str[i];
		}
		else
		{
			break;
		}
	}
	result[resultSize++] = ' ';

	for (int i = len- lastWord; i < len; i++)
	{
		if (isLetter(str[i]))
		{
			result[resultSize++] = str[i];
		}
		else
		{
			break;
		}
	}
	result[resultSize] = '\0';

	return result;
}


int main()
{
	char str[] = "Hello hi hey";
	char* result = concatFirstLast(str);
	std::cout << result;
	delete[]result;
	return 0;
}