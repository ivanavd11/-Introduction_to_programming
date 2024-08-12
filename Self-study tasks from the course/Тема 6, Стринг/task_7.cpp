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

int counter(char* s1, char* s2)
{
	int counter = 0;
	int size1 = strLen(s1);
	int size2 = strLen(s2);
	if (size2 > size1)
	{
		return counter;
	}
	
	for (int i = 0; i < size1; i++)
	{
			if (s1[i] == s2[0])
			{
				int newi = i;
				newi++;
				for (int j = 1; j < size2; j++)
				{
					int newj = j;
					while (s1[newi] == s2[newj])
					{
						newi++;
						newj++;
					}
					if (s2[newj] == '\0')
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
	char s1[MAX_SIZE] = "";
	char s2[MAX_SIZE] = "";
	std::cin.getline(s1, MAX_SIZE);
	std::cin.getline(s2, MAX_SIZE);
	std::cout << counter(s1, s2);
	return 0;
}