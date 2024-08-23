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

int maxLenWord(char* str, int len)
{
	int counter = 0;
	int current = 0;
	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		{
			if (counter > current)
			{
				current = counter;
			}
			counter = 0;
		}
		
		else counter++;
	}
	return current;
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int counterOfLowerLetters(char* str, int len, int bigWord)
{
	int counter = 0;
	int lowerCounter = 0;
	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		{
			counter = 0;
		}
		else counter++;
		if (counter == bigWord)
		{
			i = i - bigWord;
			i++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			{
				if (isLower(str[i]))
				{
					lowerCounter++;
				}
				i++;
			}
			return lowerCounter;
		}
	}
}

int maxWord(char* str)
{
	if (!str)
		return -1;

	int len = myStrLen(str);

	int bigWord = maxLenWord(str, len);
	int lowerCounter = counterOfLowerLetters(str, len, bigWord);

	return  bigWord * lowerCounter;
}

int main()
{
	char str[] = "This is aNothEr string";
	std::cout << maxWord(str);
	return 0;
}