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

void  insertSymbol(char text[], char result[], char symbol, int index)
{
	if (!text)
	{
		return;
	}
	
	int len = myStrLen(text);

	for (int i = 0; i < index; ++i) 
	{
		result[i] = text[i];
	}

	result[index] = symbol;

	for (int i = index; i < len; ++i) 
	{
		result[i + 1] = text[i];
	} 

	result[len + 1] = '\0';
}

int main()
{
	char text[100];
	std::cin.getline(text, 100);
	char symbol;
	int index;
	std::cin >> symbol >> index;
	char result[100];

	insertSymbol(text, result, symbol, index);
	std::cout << result;
	return 0;
}