#include <iostream>

constexpr int SIZE = 1000;

int binarySearch(int arr[], int len, int el)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		//left + right) / 2;
		if (el > arr[mid])
			left = mid + 1;
		else if (el < arr[mid])
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,4,5,8,9 };
	int size = sizeof(arr) / sizeof(int);
	std::cout << binarySearch(arr, size, 8);
}