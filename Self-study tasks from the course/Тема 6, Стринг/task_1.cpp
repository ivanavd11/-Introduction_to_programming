#include <iostream>


int myStrLen(char* str)
{
	int size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return size;
}

bool isPalindrom(char* str, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		if (str[i] != str[size - 1 - i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	char str[100] = "";
	std::cin >> str;
	int size = myStrLen(str);
	if (isPalindrom(str, size))
	{
		std::cout << "Yes\n";
	}
	else
	{
		std::cout << "No\n";
	}
	return 0;
}