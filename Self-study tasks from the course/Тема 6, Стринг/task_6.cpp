#include <iostream>

const int MAX_SIZE = 100;

int strLen(char* str)
{
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}
bool isValid(char* str)
{
	int size = strLen(str);
	for (int i = 0; i < size; i++)
	{
		if (str[i] < 'A' || str[i]>'Z')
		{
			return false;
		}
	}
	return true;
}

bool isDifferentLetters(char* str)
{
	int size = strLen(str);
	for (int i = 0; i < size - 1; i++)
	{
		char ch = str[i];
		for (int j = i + 1; j < size; j++)
		{
			if (ch == str[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	char str[MAX_SIZE] = "";
	std::cin >> str;
	if (isValid(str))
	{
		std::cout << isDifferentLetters(str);
	}
	else
	{
		std::cout << "Invalid input\n";
	}
	return 0;
}