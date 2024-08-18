#include <iostream>
bool isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int strcmpCustom(const char* s1, const char* s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void strcpyCustom(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void findLexicographicallySmallestWord(const char* text, char* result) {
    char currentWord[100];
    char smallestWord[100];
    int currentWordLength = 0;
    bool foundWord = false;

    while (*text) {
        if (isAlpha(*text)) {
            currentWord[currentWordLength++] = toLowerCase(*text);
        }
        else if (currentWordLength > 0) {
            currentWord[currentWordLength] = '\0';

            if (!foundWord || strcmpCustom(currentWord, smallestWord) < 0) {
                strcpyCustom(smallestWord, currentWord);
                foundWord = true;
            }

            currentWordLength = 0;
        }
        text++;
    }

    // За последната дума в текста, ако няма последващ разделител
    if (currentWordLength > 0) {
        currentWord[currentWordLength] = '\0';
        if (!foundWord || strcmpCustom(currentWord, smallestWord) < 0) {
            strcpyCustom(smallestWord, currentWord);
        }
    }

    strcpyCustom(result, smallestWord);
}

int main() {
    char text[] = "Me? Why always me?";
    char result[100];

    findLexicographicallySmallestWord(text, result);
    std::cout << result << std::endl; 

    return 0;
}