#include <iostream>

using namespace std;

int mystrLen(char* str)
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

bool contains(const char* A,
	          const char* B)
{// Ако B е празен низ, винаги се счита, че се съдържа в A
    if (*B == '\0') {
        return true;
    }

    // Преминаваме през всеки символ на A
    while (*A) {
        // Запазваме указателя към текущата позиция в A
        const char* start = A;
        const char* pattern = B;

        // Проверяваме дали поднизът B съвпада с част от A
        while (*A && *pattern && *A == *pattern) {
            ++A;
            ++pattern;
        }

        // Ако достигнем края на B, значи сме намерили съвпадение
        if (*pattern == '\0') {
            return true;
        }

        // Възстановяваме A до началото на текущата част и продължаваме към следващ символ
        A = start + 1;
    }

    return false;
}

int main()
{
    char A[] = "tests";
    char B[] = "st";
    cout << contains(A, B);

}