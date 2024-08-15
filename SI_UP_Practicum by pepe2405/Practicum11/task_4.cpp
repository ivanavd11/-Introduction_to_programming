#include <iostream>

constexpr int SIZE = 100;

int myStrLen(char* str)
{
	if (!str) {
		return 0;
	}
	int len = 0;
	while (*str) {
		str++;
		len++;
	}
	return len;
}

int counterOfSpecialSymbol(char* str)
{
	if (!str)
	{
		return -1;
	}
	int counter = 0;
	int size = myStrLen(str);
	for (int i = 0; i < size; i++)
	{
		if (str[i] == '.' || str[i] == ',' || str[i] == ';'
			|| str[i] == '!' || str[i] == '?' || str[i] == ':')
		{
			counter++;
		}
	}

	return counter;
}
int main()
{
	char str[SIZE] = "";
	std::cin.getline(str, SIZE);
	std::cout << counterOfSpecialSymbol(str);
	return 0;
}