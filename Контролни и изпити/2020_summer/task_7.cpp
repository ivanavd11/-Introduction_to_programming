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

bool isValid(char* str, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i]<'0' || str[i] > '9')
		{
			return false;
		}
	}
	return true;
}

long convertNumber(char* num)
{
	if (!num)
		return -1;

	int len = myStrLen(num);

	if (!isValid(num, len))
	{
		return -1;
	}

	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		int digit = num[i] - '\0';
		sum += digit;
	}
	return sum;
}

int main()
{
	char str[] = "123u5";
	std::cout << convertNumber(str);
	return 0;
}