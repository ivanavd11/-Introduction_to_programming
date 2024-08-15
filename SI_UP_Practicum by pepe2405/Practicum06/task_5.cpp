#include <iostream>

void newArray(int *result,int &resultSize, int* arr1, int size1, int* arr2, int size2)
{
	int i = 0;
	for (i; i < size1; i++)
	{
		result[i] = arr1[i];
	}

	for (int j = 0; j < size2; ++j) {
		bool found = false;
		for (int k = 0; k < size1; ++k) {
			if (arr2[j] == arr1[k]) {
				found = true;
				break;
			}
		}
		if (!found) {
			result[i] = arr2[j];
			i++;
		}
	}

	resultSize = i; // Обновяваме размера на резултантния масив
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(arr[min_index], arr[i]);
		}
	}
}

int main()
{
	int arr1[] = { 2,4,1,7,8 };
	int arr2[] = { 1,2,3,5 };
	int size1 = sizeof(arr1) / sizeof(int);
	int size2 = sizeof(arr2) / sizeof(int);
	int result[1000] = {};
	int resultSize = 0;
	newArray(result, resultSize, arr1, size1, arr2, size2);
	selectionSort(result, resultSize);

	for (int i = 0; i < resultSize; i++)
	{
		std::cout << result[i] << " ";
	}
	return 0;
}