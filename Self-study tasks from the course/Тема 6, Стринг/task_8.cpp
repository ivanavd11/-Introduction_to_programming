#include <iostream>

const int MAX_SIZE = 100;

int strLen(char* str)
{
	int len = 0; 
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

int counterOfSearch(char* str, char* search)
{
	int size = strLen(str);
	int sizeOfSearch = strLen(search);
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == search[0])
		{
			int newi = i;
			for (int j = 1; j < sizeOfSearch; j++)
			{
				newi++;
				int newj = j;
				while (str[newi] == search[newj])
				{
					newi++;
					newj++;
				}
				if (search[newj] == '\0')
				{
					counter++;
				}
			}
		}
	}
	return counter;
}
int main()
{
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);
	char s1[] = "begin";
	char s2[] = "end";
	int countBegin = counterOfSearch(str, s1);
	int countEnd = counterOfSearch(str, s2);
	std::cout << countBegin << '\n' << countEnd;
	return 0;
}