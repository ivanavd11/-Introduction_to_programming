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

int counterOfWords(char str[], int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (isLetter(str[i]) && !isLetter(str[i + 1]))
		{
			counter++;
		}
	}
	return counter;
}

int countWordWithA(char str[], int len)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (i == 0 && str[i] == 'a')
		{
			counter++;
		}
		else if (!isLetter(str[i - 1]) && str[i] == 'a')
		{
			counter++;
		}

	}

	return counter;
}

char* GetWord(char str[])
{
	if (!str)
		return nullptr;
	char* result = new char[10];
	int len = myStrLen(str);


	int resultSize = 0;
	if (countWordWithA(str, len) < 9)
	{
		result[resultSize++] = countWordWithA(str, len) + '0';
	}
	else
	{
		result[resultSize++] = countWordWithA(str, len) / 10 + '0';
		result[resultSize++] = countWordWithA(str, len) % 10 + '0';
	}
	result[resultSize++] = ',';

	if (counterOfWords(str, len) < 9)
	{
		result[resultSize++] = counterOfWords(str, len) + '0';
	}
	else
	{
		result[resultSize++] = counterOfWords(str, len) / 10 + '0';
		result[resultSize++] = counterOfWords(str, len) % 10 + '0';
	}
	
	result[resultSize] = '\0';
	return result;

}

int main()
{
	char str[] = " It took      about      an hour to                  answer all the questions.               ";
	char* result = GetWord(str);
	std::cout << result;
	delete[] result;
	return 0;
}