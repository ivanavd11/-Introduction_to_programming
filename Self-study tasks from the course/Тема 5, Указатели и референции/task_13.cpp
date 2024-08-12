#include <iostream>

bool doesSecondPointerPointToFirst(int* ptr1, int** ptr2) {
    return *ptr2 == ptr1;
}

int main() {
    int num = 42;
    int* p1 = &num;
    int* p2 = p1;
    int* p3 = nullptr;

    // Тест 1: p2 сочи към p1
    if (doesSecondPointerPointToFirst(p1, &p2)) {
        std::cout << "p2 points to p1" << std::endl;
    }
    else {
        std::cout << "p2 does not point to p1" << std::endl;
    }

    // Тест 2: p3 не сочи към p1
    if (doesSecondPointerPointToFirst(p1, &p3)) {
        std::cout << "p3 points to p1" << std::endl;
    }
    else {
        std::cout << "p3 does not point to p1" << std::endl;
    }

    return 0;
}