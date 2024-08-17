#include <iostream>

int findUnique(int arr[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result = result ^ arr[i];
	}
	return result;
}

int main()
{
	int arr[] = { 9,18,9,12,18,15,12 };
	int size = sizeof(arr) / sizeof(int);
	std::cout << findUnique(arr, size);
	return 0;
}