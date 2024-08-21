#include <iostream>

int findIndexOfMinusOne(int* X, int* Y, int n) {
    int left = 0;
    int right = 2 * n; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (Y[mid] == -1) {
            return mid;
        }

        if (mid < n || (mid >= n && Y[mid] != X[mid - (mid - n)])) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    
    int n = 4; 
    int Y_size = n + 1; 

    int X[] = { 5, 2, 9, 1 };
    int Y[] = { 5, -1, 2, 9, 1 };

    std::cout << findIndexOfMinusOne(X, Y, n) << std::endl;

    return 0;
}