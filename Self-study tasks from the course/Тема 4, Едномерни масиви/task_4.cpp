#include <iostream>

constexpr int SIZE = 50;

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int findMin(int* arr, int n)
{
	int firstElement = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (firstElement > arr[i])
		{
			firstElement = arr[i];
		}
	}
	return firstElement;
}
int findMax(int* arr, int n)
{
	int firstElement = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (firstElement < arr[i])
		{
			firstElement = arr[i];
		}
	}
	return firstElement;
}
int main()
{
	int array[SIZE] = {};
	int n = 0;
	std::cin >> n;
	inputArray(array, n);
	std::cout << "MIN = " << findMin(array, n);
	std::cout << "\nMAX = " << findMax(array, n);
	return 0;
}