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

bool isLetter(char ch)
{
	return ((ch >= 'a' && ch <= 'z') ||
			(ch >= 'A' && ch <= 'Z'));
}

void counterOfWords(char* str, int len, int& evenWords, int &oddWords)
{
	int letters = 0;

	for (int i = 0; i < len; i++)
	{
		if (isLetter(str[i]))
		{
			letters++;
			if (!isLetter(str[i + 1]))
			{
				if (letters % 2 == 0)
				{
					evenWords++;
				}
				else
				{
					oddWords++;
				}
			}
		}
		else letters = 0;
	}
}

int* numOfWords(char str[])
{
	if (!str)
		return nullptr;

	int len = myStrLen(str);

	int evenWords = 0;
	int oddWords = 0;
	counterOfWords(str, len, evenWords, oddWords);

	int* result = new int[2];
	result[0] = evenWords;
	result[1] = oddWords;

	return result;
}

int main()
{
	char str[] = " This is an example string ";
	int* arr = numOfWords(str);
	for (int i = 0; i < 2; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}