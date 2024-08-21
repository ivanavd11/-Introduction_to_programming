#include <iostream>

int findPeakIndex(int* arr, int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if ((mid == 0 || arr[mid - 1] < arr[mid]) &&
            (mid == size - 1 || arr[mid] > arr[mid + 1])) {
            return mid;
        }

        
        if (mid < size - 1 && arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        }
        else { 
            right = mid - 1;
        }
    }

    return -1; 
 }

int main() {
   
    int arr[] = { 39, 4, 6, 1, 2, 66, 33 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeakIndex(arr, size);
    std::cout << "Peak index: " << peakIndex << std::endl;

    return 0;
}