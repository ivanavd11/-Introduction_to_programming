#include <iostream>

constexpr int SIZE = 100;

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

void newString(char* str, char* result)
{
	if (!str)
		return;

	int len = myStrLen(str);

	int counter = 0;
	int resultSize = 0;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j < len; j++)
		{
			int number = str[j] - '0';
			if (i == number)
			{
				counter++;
			}
		}
		if (counter != 0)
		{
			if (resultSize != 0)
			{
				result[resultSize++] = ',';
			}
			result[resultSize++] = (counter + '0');
			result[resultSize++] = 'x';
			result[resultSize++] = (i + '0');
			counter = 0;
		}
	}
	result[resultSize] = '\0';
}


int main()
{
	char str[] = "4231148";
	char result[SIZE] = "";
	newString(str, result);
	std::cout << result;
	return 0;
}