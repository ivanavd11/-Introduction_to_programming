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

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

void Revert(char str[])
{
	if (!str)
		return;
	int len = myStrLen(str);

	for (int i = 0; i < len; i++)
	{
		if (isUpper(str[i]))
		{
			str[i] = str[i] - 'A' + 'a';
		}
		else if (isLower(str[i]))
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
}

//int main()
//{
//	char str[] = "I am Ivana!";
//	Revert(str);
//	std::cout << str;
//	return 0;
//}