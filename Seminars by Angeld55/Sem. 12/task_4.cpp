#include <iostream>

const int MAX_LENGTH = 2048;

void splitText(char* text, char**& words, int& wordCount) {
    wordCount = 0;
    words = new char* [MAX_LENGTH / 2];

    char* start = text;
    while (*start) {
        while (*start == ' ') start++; // Прескачане на интервалите
        if (*start == '\0') break;

        char* end = start;
        while (*end != ' ' && *end != '\0') end++; // Намиране на края на думата

        int length = end - start;
        words[wordCount] = new char[length + 1];

        for (int i = 0; i < length; ++i) {
            words[wordCount][i] = start[i];
        }
        words[wordCount][length] = '\0';

        wordCount++;
        start = end;
    }
}

void censorWord(char** words, int index, int wordCount) {
    if (index >= 0 && index < wordCount) {
        delete[] words[index];
        words[index] = new char[2];
        words[index][0] = '*';
        words[index][1] = '\0';
    }
}

void uncensorWord(char** words, char** originalWords, int index, int wordCount) {
    if (index >= 0 && index < wordCount) {
        delete[] words[index];
        int length = 0;
        while (originalWords[index][length] != '\0') length++;

        words[index] = new char[length + 1];
        for (int i = 0; i < length; ++i) {
            words[index][i] = originalWords[index][i];
        }
        words[index][length] = '\0';
    }
}

void changeWord(char** words, int index, const char* newWord, int wordCount) {
    if (index >= 0 && index < wordCount) {
        delete[] words[index];

        int length = 0;
        while (newWord[length] != '\0') length++;

        words[index] = new char[length + 1];
        for (int i = 0; i < length; ++i) {
            words[index][i] = newWord[i];
        }
        words[index][length] = '\0';
    }
}

char* createText(char** words, int wordCount) {
    int totalLength = 0;

    for (int i = 0; i < wordCount; ++i) {
        int length = 0;
        while (words[i][length] != '\0') length++;
        totalLength += length + 1; // Сумата на дължината на думите + интервали
    }

    char* result = new char[totalLength];
    int position = 0;

    for (int i = 0; i < wordCount; ++i) {
        int length = 0;
        while (words[i][length] != '\0') {
            result[position++] = words[i][length++];
        }
        if (i < wordCount - 1) {
            result[position++] = ' ';
        }
    }
    result[position] = '\0';

    return result;
}

int main() {
    char text[MAX_LENGTH] = "Hello my 320 friends how are you";
    char* originalText = new char[MAX_LENGTH];
    for (int i = 0; i < MAX_LENGTH; ++i) {
        originalText[i] = text[i];
    }

    char** words;
    int wordCount;
    splitText(text, words, wordCount);

    char** originalWords = new char* [wordCount];
    for (int i = 0; i < wordCount; ++i) {
        int length = 0;
        while (words[i][length] != '\0') length++;

        originalWords[i] = new char[length + 1];
        for (int j = 0; j < length; ++j) {
            originalWords[i][j] = words[i][j];
        }
        originalWords[i][length] = '\0';
    }

    // Пример за действия с текста
    censorWord(words, 2, wordCount);
    censorWord(words, 4, wordCount);
    uncensorWord(words, originalWords, 2, wordCount);
    changeWord(words, 3, "enemies", wordCount);

    char* result = createText(words, wordCount);
    std::cout << result << std::endl;

    // Освобождаване на паметта
    for (int i = 0; i < wordCount; ++i) {
        delete[] words[i];
        delete[] originalWords[i];
    }
    delete[] words;
    delete[] originalWords;
    delete[] result;

    return 0;
}