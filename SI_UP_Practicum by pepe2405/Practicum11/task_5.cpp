#include <iostream>

constexpr int SIZE = 1000;

int myStrLen(char* str)
{
	if (!str)
	{
		return 0;
	}
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

bool isDifferentLetters(char* str)
{
	if (!str)
	{
		return false;
	}
	int size = myStrLen(str);

	for (int i = 0; i < size-1; i++)
	{
		if (!isUpper(str[i]))
		{
			return false;
		}
		char symbol = str[i];
		for (int j = i + 1; j < size; j++)
		{
			if (str[j] == symbol)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	char str[SIZE] = "";
	std::cin.getline(str, SIZE);
	if (isDifferentLetters(str))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}