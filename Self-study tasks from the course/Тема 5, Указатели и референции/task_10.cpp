#include <iostream>


void printPointerDetails(int*& ptrRef) {
    // Печатаме адреса на самия указател
    std::cout << "Address of the pointer (ptrRef): " << &ptrRef << std::endl;

    // Печатаме адреса, който сочи указателят
    std::cout << "Address stored in the pointer (ptrRef): " << ptrRef << std::endl;

    // Печатаме стойността, която се намира на адреса, сочен от указателят
    if (ptrRef != nullptr) {
        std::cout << "Value at the address pointed by ptrRef: " << *ptrRef << std::endl;
    }
    else {
        std::cout << "ptrRef is nullptr, cannot dereference." << std::endl;
    }
}

int main() {
    int num = 10;
    int* ptr = &num;

    std::cout << "Before calling printPointerDetails:" << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address stored in ptr: " << ptr << std::endl;
    std::cout << "Value at the address pointed by ptr: " << *ptr << std::endl;

    std::cout << "\nCalling printPointerDetails:" << std::endl;
    printPointerDetails(ptr);

    return 0;
}