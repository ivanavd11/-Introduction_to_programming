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

char* newString(char* str, int arr[], int size, char symbol)
{
	if (!str)
		return 0;

	int len = myStrLen(str);
	int resultSize = len + size;
	char* result = new char[resultSize + 1];


	int resultLen = 0;

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] == i)
			{
				result[resultLen++] = symbol;
				break;
			}
		}
		result[resultLen++] = str[i];
	}

	result[resultLen] = '\0';

	return result;
}

int main()
{
	char str[] = "Hi here nice o mee you.";
	int arr[] = { 3,13,18 };
	int size = 3;
	char symbol = 't';

	char* result = newString(str, arr, size, symbol);
	std::cout << result;
	delete[] result;
	return 0;
}