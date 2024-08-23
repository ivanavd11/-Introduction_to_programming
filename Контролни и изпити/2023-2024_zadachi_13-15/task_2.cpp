#include <iostream>

void bubbleSort(int* arr, size_t L) 
{
    for (size_t i = 0; i < L - 1; i++) 
    {
        for (size_t j = 0; j < L - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findIndex(const int arr[], size_t L) {
    if (arr == nullptr || L == 0) {
        return -1;
    }

    int* sortedArr = new int[L];
    for (size_t i = 0; i < L; i++) {
        sortedArr[i] = arr[i];
    }

    bubbleSort(sortedArr, L);

    for (int i = 0; i < L; i++) {
        int M = L - i;
        if (sortedArr[i] >= M) {
            delete[] sortedArr; 
            return M;
        }
    }

    delete[] sortedArr; 
    return -1;
}

int main() {
    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
    size_t L = sizeof(arr) / sizeof(arr[0]);

    int result = findIndex(arr, L);
    std::cout << result;

    return 0;
}