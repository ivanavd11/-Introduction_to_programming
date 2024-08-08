#include <iostream>

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

bool isNegativ(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] < 0)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int rows, cols = 0;
	std::cin >> rows >> cols;

	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	inputMatrix(matrix, rows, cols);
	std::cout << isNegativ(matrix, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}