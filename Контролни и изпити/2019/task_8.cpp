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

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverseString(char*& str, int len)
{
	int last = len - 1;
	for (int i = 0; i < len / 2; i++)
	{
		swap(str[i], str[last]);
		last--;
	}
}

bool doExist(char* symbols, char* word)
{
	if (!symbols || !word)
	{
		return false;
	}
	int lenSymbols = myStrLen(symbols);
	int lenWord = myStrLen(word);
	if (lenSymbols < lenWord)
	{
		return false;
	}

	reverseString(symbols, lenSymbols);

	for (int i = 0; i < lenSymbols; i++)
	{
		if (symbols[i] == word[0])
		{
			for (int j = 1; j < lenWord; j++)
			{
				i++;
				if (symbols[i] != word[j])
				{
					i--;
					break;
				}
				if (j == lenWord - 1)
				{
					return true;
				}
			}

		}
	}
	return false;
}

int main()
{
	char str[] = "I mmammmmam there!";
	char word[] = "mma";
	std::cout << doExist(str, word);
	return 0;
}