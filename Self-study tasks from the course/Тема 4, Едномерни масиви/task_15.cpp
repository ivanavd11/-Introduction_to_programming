#include <iostream>

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void outputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<< " ";
	}
}

void swap(int& a, int& b)
{
	int temp = a; 
	a = b; 
	b = temp;
}

void selectionSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
}

void newArray(int* arr1, int* arr2, int n, int m, int* result)
{
	for (int i = 0; i < n; i++)
	{
		result[i] = arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		result[n + i] = arr2[i];
	}

	selectionSort(result, n + m);
}

int main()
{
	int n, m = 0;
	std::cin >> n;
	int* arr1 = new int[n];
	inputArray(arr1, n);

	std::cin >> m;
	int* arr2 = new int[m];
	inputArray(arr2, m);

	int* result = new int[m + n];
	newArray(arr1, arr2, n, m, result);
	outputArray(result, m + n);

	delete[] result;
	delete[] arr1;
	delete[] arr2;
	return 0;
}