#include <iostream>

int averageSum(int* arr, int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum / len;
}

int** splitArr(int* arr, int M)
{
	int** matrix = new int* [M];
	for (int i = 0; i < M; i++)
	{
		matrix[i] = new int[2];
	}

	int average = averageSum(arr, M);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				matrix[i][j] = arr[i];
			}
			else
			{
				matrix[i][j] = average;
			}
		}
	}

	return matrix;
}

int main()
{
	int arr[] = { 1, 7, 4, 11, 23, 15, 12, 21 };
	int len = 8;
	int** matrix = splitArr(arr, len);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < len; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}