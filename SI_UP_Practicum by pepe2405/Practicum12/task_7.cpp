#include <iostream>

bool isPalindrome(char* str, int start, int end)
{
	if (!str)
	{
		return false;
	}
	if (start >=end)
	{
		return true;
	}
	if (str[start] != str[end])
	{
		return false;
	}

	return isPalindrome(str, start + 1, end - 1);
}

int main()
{
	char str[] = "abccbva";
	int size = 7;
	std::cout << isPalindrome(str, 0, size - 1);
	
	return 0;
}