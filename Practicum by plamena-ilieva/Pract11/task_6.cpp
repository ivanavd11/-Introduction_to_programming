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

int sizeOfResult(char* str, int len)
{
	int size = 0;
	for (int i = 0; i < len; i++)
	{
		int counter = 0;
		for (int j = 0; j < len; j++)
		{
			if (str[i] == str[j])
			{
				counter++;
			}
		}
		if (counter==1)
		{
			size++;
		}
	}
	return size;
}

char* newString(char* str)
{
	if (!str)
	{
		return nullptr;
	}
	int len = myStrLen(str);

	int resultSize = sizeOfResult(str, len);
	char* result = new char[resultSize + 1];

	int size = 0;
	for (int i = 0; i < len; i++)
	{
		int counter = 0;
		for (int j = 0; j < len; j++)
		{
			if (str[i] == str[j])
			{
				counter++;
			}
		}
		if (counter == 1)
		{
			result[size++] = str[i];
		}
	}
	result[size] = '\0';
	return result;

}

int main()
{
	char str[] = "aklahk3g*5ggkkks";
	char* result = newString(str);
	std::cout << result;
	delete[] result;
	return 0;
}