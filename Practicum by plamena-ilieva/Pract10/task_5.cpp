#include <iostream>

constexpr int SIZE = 1000;

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

void newString(char* str1, char* str2, char* result)
{
	if (!str1 || !str2)
		return;

	int len1 = myStrLen(str1);
	int len2 = myStrLen(str2);
	int resultLen = 0;

	for (int i = 0; i < len1; i++)
	{
		bool isFound = false;
		for (int j = 0; j < len2; j++)
		{
			if (str1[i] == str2[j])
			{
				isFound = true;
				break;
			}
		}
		if (!isFound)
		{
			result[resultLen++] = str1[i];
		}
	}

	for (int i = 0; i < len2; i++)
	{
		bool isFound = false;
		for (int j = 0; j < len1; j++)
		{
			if (str2[i] == str1[j])
			{
				isFound = true;
				break;
			}
		}
		if (!isFound)
		{
			result[resultLen++] = str2[i];
		}
	}

	result[resultLen] = '\0';
}

int main()
{
	char str1[] = "abcde";
	char str2[] = "acdef";
	char result[SIZE] = "";

	newString(str1, str2, result);
	std::cout << result;
	return 0;
}