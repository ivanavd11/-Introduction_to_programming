#include <iostream>

int sumOfElements(int arr[], int size)
{
	if (size == 1)
	{
		return arr[size-1];
	}
	return arr[size - 1] + sumOfElements(arr, size - 1);
}

int main()
{
	int arr[] = { 1,2,3,5,4,6 };
	int size = sizeof(arr) / sizeof(int);
	std::cout << sumOfElements(arr, size);
	return 0;
}