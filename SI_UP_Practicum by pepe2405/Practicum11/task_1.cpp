#include <iostream>

constexpr int SIZE = 1000;

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

void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

char* addSymbol(char* str, char ch, int index)
{
	if (!str)
	{
		return nullptr;
	}

	int size = myStrLen(str);

	if (index < 0 || index > size) {
		std::cerr << "Invalid index" << std::endl;
		return nullptr;
	}

	char* newText = new char[size + 2];

	// Копираме частта от низа преди индекса
	for (int i = 0; i < index; ++i) {
		newText[i] = str[i];
	}

	// Добавяме новия символ на позиция i
	newText[index] = ch;

	// Копираме частта от низа след индекса
	for (int i = index; i <= size; ++i) {
		newText[i + 1] = str[i];
	}

	return newText;
}

int main()
{
	char str[SIZE] = "";
	std::cin.getline(str, SIZE);
	char ch;
	int index;
	std::cin >> ch >> index;
	char* result = addSymbol(str, ch, index);
	
	std::cout << result;
	
	return 0;
}