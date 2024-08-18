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

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
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

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void sort(char* str, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if ((str[i] - '\0') > (str[j] - '\0'))
			{
				swap(str[i], str[j]);
			}
		}
	}
}

char* sortLowerArray(char* str)
{
	int len = myStrLen(str);
	int counterLower = counterOfLowerLetters(str, len);

	char* result = new char[counterLower + 1];
	int resultIndex = 0;

	while (*str)
	{
		if (isLower(*str))
		{
			result[resultIndex++] = *str;
		}
		str++;
	}
	result[resultIndex++] = '\0';
	sort(result, counterLower);
	return result;
}

int main()
{
	char str[] = "Ad5cAfa";
	char* result = sortLowerArray(str);
	std::cout << result; 
	delete[] result;
	return 0;
}