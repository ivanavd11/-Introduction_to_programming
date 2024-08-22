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

char* revandreplace(char* str)
{
	if (!str)
		return nullptr;

	int len = myStrLen(str);

	char* result = new char[len + 1];

	int resultSize = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == 'e')
		{
			result[resultSize++] = '!';
		}
		else if (str[i] == 'y')
		{
			result[resultSize++] = '*';
		}
		else
		{
			result[resultSize++] = str[i];
		}
	}
	result[resultSize] = '\0';

	return result;
}

int main()
{
	char str[] = "I left you alone";
	char* result = revandreplace(str);
	std::cout << result;

	delete[] result;
	return 0;
}