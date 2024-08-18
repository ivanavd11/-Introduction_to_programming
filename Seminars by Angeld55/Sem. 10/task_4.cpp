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

void mostFrequentWord(const char* text, char* result) {
    const int maxWords = 1000;
    const int maxWordLength = 100;
    char words[maxWords][maxWordLength] = {};
    int wordCount[maxWords] = { 0 };
    int wordIndex = 0;

    char currentWord[maxWordLength];
    int currentWordLength = 0;

    while (*text) {
        if (isAlpha(*text)) {
            currentWord[currentWordLength++] = toLowerCase(*text);
        }
        else if (currentWordLength > 0) {
            currentWord[currentWordLength] = '\0';

            // Проверка дали думата вече съществува в списъка
            bool found = false;
            for (int i = 0; i < wordIndex; i++) {
                if (strcmpCustom(words[i], currentWord) == 0) {
                    wordCount[i]++;
                    found = true;
                    break;
                }
            }

            // Добавяне на нова дума
            if (!found) {
                strcpyCustom(words[wordIndex], currentWord);
                wordCount[wordIndex] = 1;
                wordIndex++;
            }

            currentWordLength = 0;
        }
        text++;
    }

    // Намиране на най-често срещаната дума
    int maxCount = 0;
    for (int i = 0; i < wordIndex; i++) {
        if (wordCount[i] > maxCount) {
            maxCount = wordCount[i];
            strcpyCustom(result, words[i]);
        }
    }
}

int main() {
    char text[] = "Me? Why me always?";
    char result[100];

    mostFrequentWord(text, result);
    std::cout << "Most frequent word: " << result << std::endl;  // Output: "me"

    return 0;
}