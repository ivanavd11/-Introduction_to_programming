#include <iostream>

using namespace std;

// Функция за намиране на края на думата
const char* findWordEnd(const char* start, const char* end) {
    while (start < end && (*start > 32)) {
        ++start;
    }
    return start;
}

// Функция за намиране на началото на думата
const char* findWordStart(const char* start, const char* begin) {
    while (start > begin && (*(start - 1) > 32)) {
        --start;
    }
    return start;
}

// Рекурсивна функция за извеждане на думите в обратен ред
void print_backwards(const char* begin, const char* end) {
    if (begin >= end) {
        return; // Ако няма нищо за обработка, връщаме се
    }

    // Намираме края на последната дума
    const char* wordEnd = findWordEnd(end - 1, end);

    if (wordEnd == end) {
        // Няма дума, която да обхваща до края
        print_backwards(begin, end - 1); // Продължаваме към началото
    }
    else {
        // Намираме началото на последната дума
        const char* wordStart = findWordStart(wordEnd, begin);

        // Извеждаме думата
        cout.write(wordStart, wordEnd - wordStart) << " ";

        // Продължаваме с рекурсия
        print_backwards(begin, wordStart - 1);
    }
}

int main() {
    const char* text = "I need a break!";
    print_backwards(text, text + strlen(text));
    return 0;
}