#include <iostream>

int** transponire(int matrix[][10], int row, int col)
{
	int** result = new int* [col];
	for (int i = 0; i < col; i++)
	{
		result[i] = new int[row];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[j][i] = matrix[i][j];
		}
	}

	return result;
}

int main()
{
	int row = 3;
	int col = 2;
	int matrix[][10] = { {1,3},{4,6},{7,9} };

	int** result = transponire(matrix, row, col);

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < col; i++)
	{
		delete[] result[i];
	}
	delete[] result;
	return 0;
}