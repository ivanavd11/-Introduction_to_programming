#include <iostream>

void causeSegfaultIfFive(int number) {
    if (number == 5) {
        int* ptr = nullptr;  // Указател, който сочи към невалиден адрес (nullptr)
        *ptr = 42;  // Опит за запис на стойност на невалиден адрес, предизвиква сегментационна грешка
    }
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    causeSegfaultIfFive(num);

    std::cout << "Function executed without segfault." << std::endl;

    return 0;
}