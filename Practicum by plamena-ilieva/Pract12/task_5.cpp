#include <iostream>
#include <cstring>

char** splitText(const char* text, char delimiter, int& wordCount) 
{
    // Първо преброяваме броя на думите
    wordCount = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == delimiter) {
            wordCount++;
        }
    }

    // Заделяне на памет за матрицата
    char** result = new char* [wordCount];

    int wordIndex = 0;
    int start = 0;
    int len = strlen(text);

    for (int i = 0; i <= len; i++) {
        if (text[i] == delimiter || text[i] == '\0') {
            int wordLength = i - start;
            result[wordIndex] = new char[wordLength + 1]; // +1 за нулевия терминатор
            // Копиране на думата ръчно
            for (int j = 0; j < wordLength; j++) {
                result[wordIndex][j] = text[start + j];
            }
            result[wordIndex][wordLength] = '\0'; // Добавяме нулевия терминатор
            wordIndex++;
            start = i + 1;
        }
    }

    return result;
}

void printMatrix(char** matrix, int wordCount) {
    for (int i = 0; i < wordCount; i++) {
        std::cout << matrix[i] << std::endl;
    }
}

int main() {
    const char* text = "Hello:my:name:is";
    char delimiter = ':';
    int wordCount = 0;

    // Връщане на матрицата с думите
    char** wordsMatrix = splitText(text, delimiter, wordCount);

    // Принтиране на матрицата
    printMatrix(wordsMatrix, wordCount);

    // Освобождаване на заделената памет
    for (int i = 0; i < wordCount; i++) {
        delete[] wordsMatrix[i];
    }
    delete[] wordsMatrix;

    return 0;
}