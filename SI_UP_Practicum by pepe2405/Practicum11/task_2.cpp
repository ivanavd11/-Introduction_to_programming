#include <iostream>

constexpr int SIZE = 100;

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

int indexOfInterval(char* str, int size)
{
	int index = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (str[i] == ' ' && str[i+1]!=' ')
		{
			index = i;
		}
	}
	return index;
}

char* stringLastWord(char* str)
{
	if (!str)
	{
		return nullptr;
	}
	int size = myStrLen(str);
	int index = indexOfInterval(str, size);

	char* result = new char[size - index];

	int sizeResult = 0;
	for (int i = index + 1; i < size; i++)
	{
		result[sizeResult] = str[i];
		sizeResult++;
	}
	result[sizeResult] = '\0';

	return result;
}
int main()
{
	char text[SIZE] = "";
	std::cin.getline(text, SIZE);

	char* result = stringLastWord(text);
	std::cout << result;
	delete[] result;
	return 0; 
}