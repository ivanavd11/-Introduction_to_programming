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

char* CheckStr(char input[]) {
    if (input == nullptr) {
        return nullptr;
    }

    int len = myStrLen(input);
    if (len < 2) {
        return nullptr; 
    }

    int count[128] = { 0 };
    int duplicatesCount = 0;

    for (int i = 0; i < len; i++) {
        count[input[i]]++;
    }

    for (int i = 0; i < 128; i++) {
        if (count[i] > 1) {
            duplicatesCount++;
        }
    }

    char* result = new char[duplicatesCount + 1]; 
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (count[input[i]] > 1) {
            result[index++] = input[i];
            count[input[i]] = 0; 
        }
    }

    result[index] = '\0'; 

    return result;
}

int main()
{
	char str[] = "aif8sl8a";
	char* result = CheckStr(str);
	std::cout << result;
	delete[] result;
	return 0;
}