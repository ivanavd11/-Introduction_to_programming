#include <iostream>

bool elementIsInArray(int arr[], int size, int element)
{
	if (arr[size - 1] == element)
	{
		return true;
	}
	if (size <= 0)
	{
		return false;
	}
	return elementIsInArray(arr, size - 1, element);
}

int main()
{
	int arr[] = { 1,4,7,8,9 };
	int element = 3;
	int size = sizeof(arr) / sizeof(int);
	std::cout << elementIsInArray(arr, size, element);
	return 0;
}