#include <iostream>

int myStrLen(char* str)
{
	int size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return size;
}

int counterOfSpecialSymbol1(char* str, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == '!')
		{
			counter++;
		}
	}
	return counter;
}

int counterOfSpecialSymbol2(char* str, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == '?')
		{
			counter++;
		}
	}
	return counter;
}

int counterOfSpecialSymbol3(char* str, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == ',')
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	const int max_size = 100;
	char str[max_size] = "";
	std::cin.getline(str, max_size);
	int size = myStrLen(str);
	std::cout << counterOfSpecialSymbol1(str, size) << "\n";
	std::cout << counterOfSpecialSymbol2(str, size) << "\n";
	std::cout << counterOfSpecialSymbol3(str, size);
	return 0;
}