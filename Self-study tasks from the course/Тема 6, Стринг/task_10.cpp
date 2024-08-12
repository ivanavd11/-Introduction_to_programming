#include <iostream>

const int max_size = 100;

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

int returnToNumber(char* str)
{
	int size = strLen(str);
	int ten = 1;
	for (int i = 1; i < size; i++)
	{
		ten *= 10;
	}
	int number = 0;
	for (int i = 0; i < size; i++)
	{
		number = number + (str[i]-'0') * ten;
		ten /= 10;
	}
	return number;
}
int maxNumber(char* str1, char* str2)
{
	int num1 = returnToNumber(str1);
	int num2 = returnToNumber(str2);
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
int main()
{
	char str1[max_size] = "";
	char str2[max_size] = "";
	std::cin >> str1 >> str2;
	std::cout << maxNumber(str1, str2);
	return 0;
}