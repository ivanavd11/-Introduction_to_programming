#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort(int* arr, int size)
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

int* resultArray(int* arr, int size, int element)
{
	int* result = new int[size];
	for (int i = 0; i < size; i++)
	{
		result[i] = arr[i];
	}

	sort(result, size);
	return result;
}


int main()
{
	int arr[] = { 1, 5, 6, 3, 0, -1, 2, 9, 7 };
	int size = sizeof(arr) / sizeof(int);

	int* result = resultArray(arr, size, 3);

	for (int i = 0; i < size; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}