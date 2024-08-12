#include <iostream>

const int MAX_SIZE = 100;

int myStrLen(char* str)
{
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

bool isSmallLetter(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

void printLetters(char* s1, char* s2)
{
	int size1 = myStrLen(s1);
	int size2 = myStrLen(s2);
	for (int i = 0; i < size1; i++)
	{
		if (isSmallLetter(s1[i]))
		{
			bool isInStr = false;
			for (int j = 0; j < size2; j++)
			{
				if (s2[j] == s1[i])
				{
					isInStr = true;
				}
			}
			if (isInStr == false)
			{
				std::cout << s1[i]<<" ";
			}
		}
	}
}

int main()
{
	char s1[MAX_SIZE] = "";
	char s2[MAX_SIZE] = "";
	std::cin.getline(s1, MAX_SIZE);
	std::cin.getline(s2, MAX_SIZE);
	printLetters(s1, s2);
	return 0;
}