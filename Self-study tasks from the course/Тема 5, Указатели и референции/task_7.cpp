#include <iostream>

// Функцията приема два параметъра:
// 1. pointer - указателът, който искаме да проверим
// 2. targetAddress - адресът, към който искаме да сравним указателя

bool isPointerPointingToAddress(const void* pointer, const void* targetAddress) {
    return (pointer == targetAddress);
}

int main() {
    int x = 10;
    int* ptr = &x;
    int* anotherPtr = &x;

    // Проверка дали указателят ptr сочи към променливата x
    if (isPointerPointingToAddress(ptr, &x)) {
        std::cout << "ptr is pointing to the address of x\n";
    }
    else {
        std::cout << "ptr is NOT pointing to the address of x\n";
    }

    // Проверка дали указателят anotherPtr сочи към променливата x
    if (isPointerPointingToAddress(anotherPtr, &x)) {
        std::cout << "anotherPtr is pointing to the address of x\n";
    }
    else {
        std::cout << "anotherPtr is NOT pointing to the address of x\n";
    }

    return 0;
}