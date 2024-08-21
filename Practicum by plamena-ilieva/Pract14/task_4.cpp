#include <iostream>

bool isMonotonicallyIncreasing(int arr[], int n) {

    if (n == 1 || n == 0) {
        return true;
    }

    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }

    return isMonotonicallyIncreasing(arr, n - 1);
}


int main()
{
	int arr[] = { 3,4,6,8,1};
	int size = 5;
	std::cout << isMonotonicallyIncreasing(arr, size);
	return 0;
}