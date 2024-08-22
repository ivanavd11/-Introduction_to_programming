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

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

void counterWords(char* str, int len, int& upperWords, int& lowerWords)
{
	for (int i = 0; i < len; i++)
	{
		if (isUpper(str[i]))
		{
			while (isUpper(str[i]))
			{
				i++;
			}

			if (str[i] == ' ')
			{
				upperWords++;
			}

			while (str[i] != ' ')
			{
				i++;
			}

		}

		if (isLower(str[i]))
		{
			while (isLower(str[i]))
			{
				i++;
			}

			if (str[i] == ' ')
			{
				lowerWords++;
			}

			while (str[i] != ' ')
			{
				i++;
			}

		}
	}

}

int* cntWords(char str[])
{
	if (!str)
		return nullptr;

	int* arr = new int[2];
	int len = myStrLen(str);

	int upperWords = 0;
	int lowerWords = 0;

	counterWords(str, len, upperWords, lowerWords);

	arr[0] = lowerWords;
	arr[1] = upperWords;

	return arr;

}

int main()
{
	char str[] = " This IS an exAMple STRING F&OR this eXErcise. ";
	int* arr = cntWords(str);
	for (int i = 0; i < 2; i++)
	{
		std::cout << arr[i]<<" ";
	}
	delete[] arr;

	return 0;
}