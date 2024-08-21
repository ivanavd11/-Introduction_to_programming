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

int sizeOfResult(char* str1, int size1, char* str2, int size2)
{
	int size = 0;
	for (int i = 0; i < size1; i++)
	{
		if (isLower(str1[i]))
		{
			size++;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (isUpper(str2[i]))
		{
			size++;
		}
	}

	return size;
}

char* newStringWithConcat(char* str1, char* str2)
{
	if (!str1 || !str2)
	{
		return nullptr;
	}

	int len1 = myStrLen(str1);
	int len2 = myStrLen(str2);

	int resultLen = sizeOfResult(str1, len1, str2, len2);
	char* result = new char[resultLen + 1];

	int resultSize = 0;
	for (int i = 0; i < len1; i++)
	{
		if (isLower(str1[i]))
		{
			result[resultSize++] = str1[i];
		}
	}

	for (int i = 0; i < len2; i++)
	{
		if (isUpper(str2[i]))
		{
			result[resultSize++] = str2[i];
		}
	}
	result[resultSize] = '\0';

	return result;
}

int main()
{
	char str1[] = "abcAGHp";
	char str2[] = "mnAHGT5saP";

	char* result = newStringWithConcat(str1, str2);
	std::cout << result;
	delete[] result;
	return 0;
}