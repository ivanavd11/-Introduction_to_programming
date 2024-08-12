#include <iostream>

const int MAX_SIZE = 1000;

int myStrLen(char* str)
{
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

int counterOfWords(char* str, int size)
{
	int counter = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);
	int size = myStrLen(str);
	std::cout << counterOfWords(str, size);
	return 0;
}