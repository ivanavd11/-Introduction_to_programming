#include <iostream>

int** removeCol(int matrix[][10], int size, int index)
{
	int** result = new int* [size];
	for (int i = 0; i < size; i++)
	{
		result[i] = new int[size - 1];
	}

	int rows = 0;
	int cols = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == index - 1)
			{
				continue;
			}
			result[rows][cols++] = matrix[i][j];
			if (cols >= size - 1)
			{
				rows++;
				cols = 0;
			}
		}
	}

	return result;
}

int main()
{
	int size = 3;
	int matrix[][10] = { {1,2,3},{4,5,6},{7,8,9} };
	int index = 2;

	int** result = removeCol(matrix, size, index);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < size; i++)
	{
		delete[] result[i];
	}
	delete[] result;
	return 0;
}