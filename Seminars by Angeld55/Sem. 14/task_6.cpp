#include <iostream>

bool binarySearch(const int* arr, size_t size, int searched)
{
    if (size == 0)
        return false;

    int mid = size / 2;
    if (arr[mid] == searched)
        return true;
    if (arr[mid] > searched)
        return binarySearch(arr, mid, searched);
    else
        return binarySearch(arr + mid + 1, size - mid - 1, searched);
}

int main()
{
	int arr[] = { 1,2,4,5,6,8,9 };
	int element = 3;
	int size = sizeof(arr) / sizeof(int);
    std::cout << binarySearch(arr, size, element);
	return 0;
}