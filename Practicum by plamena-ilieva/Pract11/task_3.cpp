#include <iostream>

using namespace std;

int* cyclicShift(int arr[], int n, int K) {

    K = K % n;

    int* result = new int[n];

    for (int i = 0; i < n; ++i) {
        result[(i + K) % n] = arr[i];
    }

    return result;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    int* shiftedArray = cyclicShift(arr, n, K);

    for (int i = 0; i < n; ++i) {
        cout << shiftedArray[i] << " ";
    }
    cout << endl;

    delete[] shiftedArray;

    return 0;
}