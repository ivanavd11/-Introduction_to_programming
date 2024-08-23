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


char* getWord(char* str, int k)
{
	if (!str)
		return nullptr;
	int len = myStrLen(str);

	int wordCounter = 0;
	char* wordFound = new char[len];
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		wordCounter++;
		if (wordCounter == k)
		{
			int wordFoundIdx = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					wordFound[wordFoundIdx] = str[i] + ('a' - 'A');
				}

				if (str[i] >= 'a' && str[i] <= 'z')
				{
					wordFound[wordFoundIdx] = str[i] - ('a' - 'A');
				}

				i++;
				wordFoundIdx++;
			}
	
			wordFound[wordFoundIdx] = '\0';
			return wordFound;
		}

		else
		{
			while (str[i] != ' ')
			{
				i++;
			}
		}
	}

	char wrongNumber[] = "Wrong Number!";
	char* wrongNumberReturn = new char[15];

	for (int i = 0; i < 14; i++)
	{
		wrongNumberReturn[i] = wrongNumber[i];
	}
	
	wrongNumberReturn[14] = '\0';
	return wrongNumberReturn;
}


int main()
{
	int k = 7;
	char str[] = "this is a teSt string";
	char* result = getWord(str, k);
	std::cout << result;
	delete[] result;
	return 0;
}