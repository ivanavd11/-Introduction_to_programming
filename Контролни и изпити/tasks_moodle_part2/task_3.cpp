#include <iostream>

int strLen(char* str)
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

bool CheckDate(char str[])
{
	if (!str)
		return false;

	int len = strLen(str);

	if (len != 5)
		return false;

	int day = 0;
	int mount = 0;
	day = (str[0] - '0') * 10 + (str[1] - '0');
	mount = (str[3] - '0') * 10 + (str[4] - '0');

	if (str[2] != '.')
		return false;

	if (day < 1 || day>31 || mount < 1 || mount>12)
		return false;

	if (mount == 2 && day > 28)
		return false;

	if (mount == 4 || mount == 6 || mount == 9 || mount == 11)
	{
		if (day > 30)
			return false;
	}

	return true;
}

int main()
{
	char str[] = "22.05";
	std::cout << CheckDate(str);
	return 0;
}