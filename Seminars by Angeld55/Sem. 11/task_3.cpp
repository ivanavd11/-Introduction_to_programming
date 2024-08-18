#include <iostream>
#include <cmath>

int** generateSubarrays(int* arr, int n, int& subarrayCount) {
    subarrayCount = pow(2, n) - 1;  // Броят на всички непразни подмасиви
    int** subarrays = new int* [subarrayCount];

    int index = 0;
    for (int i = 1; i < (1 << n); ++i) {  // Итерация през всички комбинации
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                count++;
            }
        }
        subarrays[index] = new int[count];
        count = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subarrays[index][count++] = arr[j];
            }
        }
        index++;
    }

    return subarrays;
}

void printSubarrays(int** subarrays, int subarrayCount, int* arr, int n) {
    for (int i = 0; i < subarrayCount; ++i) {
        std::cout << "[";
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (subarrays[i][count] == arr[j]) {
                std::cout << subarrays[i][count];
                count++;
                if (count < n && subarrays[i][count] == arr[j + 1]) {
                    std::cout << ", ";
                }
            }
        }
        std::cout << "]" << std::endl;
        delete[] subarrays[i];
    }
}

int main() {
    int arr[] = { 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int subarrayCount = 0;
    int** result = generateSubarrays(arr, n, subarrayCount);

    std::cout << "All non-empty subarrays:" << std::endl;
    printSubarrays(result, subarrayCount, arr, n);

    delete[] result;

    return 0;
}