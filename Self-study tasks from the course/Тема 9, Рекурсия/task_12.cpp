#include <iostream>

bool isRising(int* arr, int size) {
    if (size < 2) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }

    return isRising(arr + 1, size - 1);
}

int main()
{
	int n = 5;
	int arr[] = { 1,5,2,7,8 };
    std::cout << isRising(arr, n);
	return 0;
}