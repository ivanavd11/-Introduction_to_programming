#include <iostream>

void bubbleSortAscending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDescending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortEvenOdd(int* arr, int size) {

    int evenCount = 0, oddCount = 0;

    int* evenArr = new int[size];
    int* oddArr = new int[size];

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        }
        else {
            oddArr[oddCount++] = arr[i];
        }
    }

    bubbleSortAscending(evenArr, evenCount);

    bubbleSortDescending(oddArr, oddCount);

    for (int i = 0; i < evenCount; i++) {
        arr[i] = evenArr[i];
    }
    for (int i = 0; i < oddCount; i++) {
        arr[evenCount + i] = oddArr[i];
    }

    delete[] evenArr;
    delete[] oddArr;
}

int main() {

    int arr[] = { 1, 2, 3, 6, 5, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    sortEvenOdd(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}