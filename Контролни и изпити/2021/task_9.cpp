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

char* changeWord(char* str, char k)
{
	if (!str)
		return nullptr;
	int len = myStrLen(str);

	char* result = new char[len + 1];
	int resultSize = 0;
	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		{
			result[resultSize++] = str[i];
			continue;
		}
		else if (str[i] == k &&
			( i==0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			while (str[i] != ' ' && str[i] != '\t')
			{
				result[resultSize++] = '*';
				i++;
			}
			result[resultSize++] = str[i];
		}
		else
		{
			result[resultSize++] = str[i];
		}
	}

	return result;
}

int main()
{
	char str[] = "This is a test string ";
	char k = 't';
	char *result = changeWord(str, k);
	std::cout << result;
	delete[] result;
	return 0;
}