#include <iostream>

constexpr int SIZE = 10;

void inputMatrix(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

int minElement(int* arr, int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int rows, cols = 0;
	std::cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	inputMatrix(matrix, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		std::cout << minElement(matrix[i], cols) << " ";
	}




	for (int i = 0; i < rows; i++) 
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}