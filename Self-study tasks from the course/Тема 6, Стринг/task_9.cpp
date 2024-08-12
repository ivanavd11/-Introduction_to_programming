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

void printSmallLetters(char* str)
{
	int size = strLen(str);
	bool letter[26] = {};
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			letter[str[i] - 'a'] = true;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (letter[i] == false)
		{
			char ch = i + 'a';
			std::cout << ch << " ";
		}
	}
}
int main()
{
	char str[max_size] = "";
	std::cin.getline(str, max_size);
	printSmallLetters(str);
	return 0;
}