#include <iostream>

int* mergeArrays(int arr1[], int arr2[], int m)
{
	int* result = new int[m];

	int last = m - 1;
	for (int i = 0; i < m; i++)
	{
		result[i] = arr1[i] + arr2[last];
		last--;
	}
	return result;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 2, 5, 7, 11 };
	int size = 4;
	int* result = mergeArrays(arr1, arr2, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << result[i] << " ";
	}
	delete[] result;
	return 0;
}