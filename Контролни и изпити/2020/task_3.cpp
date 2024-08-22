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

int convertCharToInt(char ch)
{
	return ch - '0';
}

bool CheckDate(char str[])
{
	if (!str || myStrLen(str)!=7)
		return false;

	int len = myStrLen(str);

	int year = 0;
	year = convertCharToInt(str[0]) * 1000 +
		convertCharToInt(str[1]) * 100 +
		convertCharToInt(str[2]) * 10 +
		convertCharToInt(str[3]);

	if (str[4] != ' ' || str[5] != 'g' || str[6] != '.')
	{
		return false;
	}

	if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
	{
		return true;
	}
	else return false;
}

int main()
{
	char str[] = "2024 g.";
	std::cout << CheckDate(str);
	return 0;
}