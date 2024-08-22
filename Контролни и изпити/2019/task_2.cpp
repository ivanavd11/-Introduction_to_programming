#include <iostream>
#include <cstring>

int CheckStr(const char *str)
{
    if (str == NULL || strlen(str) < 2) {
        return -1;
    }


    int charCount[256] = { 0 };

    for (int i = 0; str[i] != '\0'; ++i) {
        charCount[(unsigned char)str[i]]++;
    }

    int oddCount = 0;
    for (int i = 0; i < 256; ++i) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount > 1) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    std::cout << CheckStr("beblehl") << std::endl; // Трябва да върне 1
    std::cout << CheckStr("asdfgjk") << std::endl; // Трябва да върне 0
   // std::cout << CheckStr(nullptr) << std::endl;      // Трябва да върне -1
    return 0;
}