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

int CheckTimeStr(char str[])
{
	if (!str || strlen(str) != 8)
	{
		return -1;
	}

	int len = strLen(str);
	int hour = 0;
	int min = 0;
	int sec = 0;
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
		{
			hour = (str[i] - '0') * 10 + (str[i + 1] - '0');
			if (hour < 0 || hour>24)
			{
				return -1;
			}
			i++;
		}
		if (i == 2 || i == 5)
		{
			if (str[i] != ':')
			{
				return -1;
			}
		}
		if (i == 3)
		{
			min = (str[i] - '0') * 10 + (str[i + 1] - '0');
			if (min > 59)
			{
				return -1;
			}
			if (hour == 24 && min != 0)
			{
				return -1;
			}
			i++;
		}
		if (i == 6)
		{
			sec = (str[i] - '0') * 10 + (str[i + 1] - '0');
			if (sec > 59)
			{
				return -1;
			}
			if (hour == 24 && sec != 0)
			{
				return -1;
			}
			i++;
		}
	}

	return 1;
}

int main()
{
	char str[] = "24:50:45";
	std::cout << CheckTimeStr(str);

	return 0;
}