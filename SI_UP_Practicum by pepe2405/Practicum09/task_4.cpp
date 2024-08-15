#include <iostream>

int *adressMax(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return &max;
}

int main()
{
	int arr[] = { 1,2,3,5,4 };
	int size = sizeof(arr) / sizeof(int);
	std::cout << adressMax(arr, size);
	return 0;
}