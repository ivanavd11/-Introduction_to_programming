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

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int counterOfUpperLetters(char* str, int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (isUpper(str[i]))
		{
			counter++;
		}
	}
	return counter;
}

int counterOfLowerLetters(char* str, int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (isLower(str[i]))
		{
			counter++;
		}
	}
	return counter;
}

char* lowerString(char* str)
{
	int len = myStrLen(str);
	int counterOfLower = counterOfLowerLetters(str, len);
	char* resultSmall = new char[counterOfLower + 1];

	int resultIndex = 0;
	while (*str)
	{
		if (isLower(*str))
		{
			resultSmall[resultIndex++] = *str;
		}
		str++;
	}
	resultSmall[resultIndex] = '\0';

	return resultSmall;
}

char* upperString(char* str)
{
	int len = myStrLen(str);
	int counterOfUpper = counterOfUpperLetters(str, len);
	char* resultBig = new char[counterOfUpper + 1];
	
	int resultIndex = 0;
	while (*str)
	{
		if (isUpper(*str))
		{
			resultBig[resultIndex++] = *str;
		}
		str++;
	}
	resultBig[resultIndex] = '\0';
	return resultBig;

}


int main()
{
	char str[] = "aAcdF35Bd";
	char* result1 = lowerString(str);
	char* result2 = upperString(str);
	std::cout << result1 << '\n';
	std::cout << result2 << '\n';
	delete[]result1;
	delete[]result2;
	return 0;
}