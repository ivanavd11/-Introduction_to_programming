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

bool isPalindrome(char* str, int end, int start)
{
	if (start >= end)
	{
		return true;
	}
	if (str[start] != str[end - 1])
	{
		return false;
	}
	return isPalindrome(str, end - 1, start + 1);
}

int main()
{
	char str[] = "123521";
	int len = myStrLen(str);
	std::cout << isPalindrome(str, len, 0);
	return 0;
}