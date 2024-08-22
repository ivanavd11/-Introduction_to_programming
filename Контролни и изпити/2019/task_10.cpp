#include <iostream>

int myStrLen(char* str)
{
	if (!str)
	{
		return 0;
	}
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
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int counterOfBigestWord(char* str, int len)
{
	int current = 0;
	int counter = 0;
	for (int i = 0; i <= len ; i++)
	{
		if (isLetter(str[i]))
		{
			counter++;
		}
		else
		{
			if (counter > current)
			{
				current = counter;
				counter = 0;
			}
		}
	}
	return current;
}

char* GetWord(char str[])
{
	if (!str)
		return nullptr;

	int len = myStrLen(str);
	int sizeOfWord = counterOfBigestWord(str, len);

	char* result = new char[sizeOfWord + 1];
	result[sizeOfWord] = '\0'; 

	int currentLength = 0;  
	char* startOfWord = nullptr; 

	for (int i = 0; i <= len; i++) 
	{
		if (isLetter(str[i])) {
			if (currentLength == 0) {
				startOfWord = &str[i];  
			}
			currentLength++;
		}
		else {
			if (currentLength == sizeOfWord) {
				
				for (int j = 0; j < sizeOfWord; j++) {
					result[j] = startOfWord[j];
				}
				break;
			}
			currentLength = 0;  
		}
	}

	return result;
}

int main()
{
	char str[] = "there is pen!";
	char* result = GetWord(str);
	std::cout << result;
	delete[] result;
	return 0;
}