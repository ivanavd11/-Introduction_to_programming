#include <iostream>
using namespace std;

int* filterDivisibleNeighbors(int arr[], int n, int& newSize) {

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if ((i > 0 && arr[i] % arr[i - 1] == 0) ||
            (i < n - 1 && arr[i] % arr[i + 1] == 0)) {
            count++;
        }
    }

    int* result = new int[count];
    newSize = count;

    int index = 0;
    for (int i = 0; i < n; ++i) {
        if ((i > 0 && arr[i] % arr[i - 1] == 0) ||
            (i < n - 1 && arr[i] % arr[i + 1] == 0)) {
            result[index++] = arr[i];
        }
    }

    return result;
}

int main() {
    int arr[] = { 5, 10, 20, 4, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize=0;

    int* filteredArray = filterDivisibleNeighbors(arr, n, newSize);

    for (int i = 0; i < newSize; ++i) 
    {
        cout << filteredArray[i] << " ";
    }
    cout << endl;

    delete[] filteredArray;

    return 0;
}