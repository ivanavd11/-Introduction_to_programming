#include <iostream>
constexpr int SIZE = 100;

int MyStrLen(char* str)
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

char* stringWithoutSymbol(char* text, char symbol)
{
	if (!text)
	{
		return nullptr;
	}
	int size = MyStrLen(text);

	// �� �� �������� ������� �� ����� ���
	int resultSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (text[i] != symbol)
		{
			resultSize++;
		}
	}

	// ������� ��������� ����� �� ����� ���
	char* result = new char[resultSize + 1]; //

	// ��������� ����� ���
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (text[i] != symbol)
		{
			result[j] = text[i];
			j++;
		}
	}
	result[resultSize] = '\0';

	return result;

}

int main()
{
	char text[SIZE] = "";
	std::cin.getline(text, SIZE);
	char symbol;
	std::cin >> symbol;

	char* result = stringWithoutSymbol(text, symbol);
	std::cout << result;
	delete[] result;
	return 0;
}