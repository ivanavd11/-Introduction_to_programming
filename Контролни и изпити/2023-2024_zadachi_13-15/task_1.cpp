#include <iostream>

int myStrLen(const char* str)
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

bool isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int analyzeArray(const char* str)
{
	if (!str)
		return -1;

	int len = myStrLen(str);
	int result = -1;
	for (int i = 0; i <= 9; i++)
	{
		bool isFound = false;
		for (int j = 0; j < len; j++)
		{
			if (isDigit(str[j]))
			{
				int digit = str[j] - '0';
				if (digit == i)
				{
					isFound = true;
					break;
				}
			}
		}
		if (!isFound)
		{
			result = i;
		}
	}
	return result;

}

int main()
{
	const char str[] = "951236478jj0ioj";
	std::cout << analyzeArray(str);
	return 0;
}