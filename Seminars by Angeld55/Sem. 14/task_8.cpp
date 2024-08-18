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

void counter(char* str, int len, int& upper, int& lower)
{
	if (!str)
	{
		return;
	}

	if (isUpper(str[len - 1]))
	{
		upper++;
	}
	if (isLower(str[len - 1]))
	{
		lower++;
	}
	if (len < 0)
	{
		return;
	}
	return counter(str, len - 1, upper, lower);
}

int main()
{
	char str[] = "abc52HGR";
	int len = myStrLen(str);
	int upper = 0;
	int lower = 0;
	counter(str, len, upper, lower);
	std::cout << upper << " " << lower;
	return 0;
}