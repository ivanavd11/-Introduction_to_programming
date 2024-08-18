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

void myStrCpy(const char* source, char* dest)
{
	if (!source || !dest)
	{
		return;
	}
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

int myStrCmp(const char* first, const char* second)
{
	if (!first || !second)
	{
		return 0;
	}

	while ((*first) && (*second) && ((*first) == (*second)))
	{
		first++;
		second++;
	}

	return (*first - *second);
}

void myStrCat(char* first, const char* second)
{
	if (!first || !second)
		return;

	size_t firstLen = myStrLen(first);
	first += firstLen;
	myStrCpy(second, first);
}

int main()
{
	char str[20] = "ABC ";
	char str2[] = "XY";
	myStrCat(str, str2);

	std::cout << str;
	return 0;
}