#include <iostream>

size_t getArraySize(int* arr) {
    return sizeof(arr) / sizeof(arr[0]);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    size_t size = getArraySize(arr);

    std::cout << "Size of array inside the function: " << size << std::endl;
    std::cout << "Real size of array: " << sizeof(arr) / sizeof(arr[0]) << std::endl;

    return 0;
}