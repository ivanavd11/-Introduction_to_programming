#include <iostream>

constexpr int SIZE = 100;

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

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

int counterOfSymbol(char* str, int len, char symbol)
{
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == symbol)
		{
			counter++;
		}
	
	}
	return counter;
}

void removeSymbol(char* str, char symbol)
{
	if (!str)
		return;

	int len = myStrLen(str);
	int counter = counterOfSymbol(str, len, symbol);
	if (counter == 0)
	{
		return;
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (str[i] == symbol)
			{
				swap(str[i], str[j]);
			}
		}
	}

	len = len - counter;
	str[len] = '\0';
}

int main()
{
	char text[] = "Hello, my friend!";
	char symbol = 'e';
	removeSymbol(text, symbol);
	std::cout << text;
	return 0;
}