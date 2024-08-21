#include <iostream>

constexpr int SIZE = 100;

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

bool isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

void newString(char* input, char* result)
{
	if (!input)
		return;

	int len = myStrLen(input);

	int maxIndex = 0;

	for (int i = 1; i < len; i += 2) {
		int index = input[i] - '0';
		if (index > maxIndex) {
			maxIndex = index;
		}
	}

	for (int i = 0; i <= maxIndex; ++i) {
		result[i] = ' ';
	}

	for (int i = 0; i < len; i += 2) {
		int index = input[i + 1] - '0';
		result[index] = input[i];
	}

	int pos = 0;
	for (int i = 0; i <= maxIndex; ++i) {
		if (result[i] != ' ') {
			result[pos++] = result[i];
		}
	}
	result[pos] = '\0'; 
}

int main()
{
	char str[SIZE] = "";
	std::cin.getline(str, SIZE);

	char result[SIZE] = "";
	newString(str, result);
	std::cout << result;
	return 0;
}