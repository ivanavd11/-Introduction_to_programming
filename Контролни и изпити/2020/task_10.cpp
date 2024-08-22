#include <iostream>

int** mergearrays(int* arr1, int* arr2, int m)
{
	int** matrix = new int* [2];
	for (int i = 0; i < 2; i++)
	{
		matrix[i] = new int[m];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0)
			{
				matrix[i][j] = arr1[j];
			}
			else
			{
				matrix[i][j] = arr2[j];
			}
		}
	}
	return matrix;
}

int main()
{
	int arr1[] = { 3, 5, 11, 2, 9 };
	int arr2[] = { 1, 4, 32, 71, 5 };
	int size = 5;
	int** matrix = mergearrays(arr1, arr2, size);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j]<<" ";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < 2; i++)
	{
		delete[] matrix[i];
	}
	delete[]matrix;
	return 0;
}