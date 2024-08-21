#include <iostream>

void insertNumber(int* arr, int size, int number, int* result, int index = 0) {
    if (index == size || number < arr[index]) {
        result[index] = number;

        for (int i = index; i < size; ++i) {
            result[i + 1] = arr[i];
        }
    }
    else {
        result[index] = arr[index];
        insertNumber(arr, size, number, result, index + 1);
    }
}

int* insertSorted(int* arr, int size, int number) {

    int* result = new int[size + 1];
    insertNumber(arr, size, number, result);
    return result;
}

int main() {
    int arr[] = { 1, 2, 5, 6, 9, 23 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 6;


    int* result = insertSorted(arr, size, number);

    for (int i = 0; i < size + 1; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    delete[] result;

    return 0;
}