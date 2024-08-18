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

bool isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int counterOfNumbers(char* str, int len)
{
	int counter = 0;
	for (int i = 0; i < len - 1; i++)
	{
		if (isDigit(str[i]) && (!isDigit(str[i + 1])))
		{
			counter++;
		}
	}
	return counter;
}

int counterOfDigit(char* str, int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (isDigit(str[i]))
		{
			counter++;
		}
	}
	return counter;
}

char* censoreNumber(char* str)
{
	int len = myStrLen(str);
	int counterNumbers = counterOfNumbers(str, len);
	int counterDigit = counterOfDigit(str, len);
	int resultSize = len - counterDigit + counterNumbers;
	char* result = new char[resultSize+1];

	unsigned resultIndex = 0;

	while (*str)
	{
		if (!isDigit(*str))
		{
			result[resultIndex++] = *str;
		}
		else if (!isDigit(*(str + 1)))
			result[resultIndex++] = '*';
		str++;
	}

	result[resultSize] = '\0';
	return result;
}

int main()
{
	char str[] = "abc1234dgg4fsdg5r";

	char* result = censoreNumber(str);
	std::cout << result;
	delete[]result;
	return 0;
}