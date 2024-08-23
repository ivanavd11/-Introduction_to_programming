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

bool doExist(char* symbols, char* word)
{
	if (!symbols || !word)
		return false;

	int symbolsLen = myStrLen(symbols);
	int wordLen = myStrLen(word);

	if (symbolsLen < wordLen)
		return false;

	int len = 0;
	for (int i = 0; i < symbolsLen; i++)
	{
		if (symbols[i] == word[len] && symbols[i-1]==' ')
		{
			i++;
			len++;
			while (word[len] != 0)
			{
				if (symbols[i] != word[len])
				{
					i--;
					len = 0;
					break;
				}
				len++;
				i++;
			}
			if (len == wordLen && symbols[i]==' ')
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	char symbols[] = "i am there, where are you";
	char word[] = "where";
	std::cout << doExist(symbols, word);
	return 0;
}