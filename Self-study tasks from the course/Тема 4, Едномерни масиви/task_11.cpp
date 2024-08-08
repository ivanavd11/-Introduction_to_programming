#include <iostream>

constexpr int MAX_SIZE = 49;


void inputStr(char* str, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> str[i];
	}
}

bool isSimetric(char* str, int size)
{
	char revert[MAX_SIZE] = "";
	int counter = size-1;
	for (int i = 0; i < size; i++)
	{
		revert[i] = str[counter];
		counter--;
	}

	for (int i = 0; i < size; i++)
	{
		if (revert[i] != str[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int size = 0;
	std::cin >> size;
	char str[MAX_SIZE] = "";
	inputStr(str, size);
	std::cout << isSimetric(str, size);
	return 0;
}