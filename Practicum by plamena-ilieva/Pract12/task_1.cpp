#include <iostream>

int** newMatrix(int matrix[][10], int size, int index)
{
	int** result = new int* [size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		result[i] = new int[size];
	}
	
	int rows = 0;
	int cols = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == index - 1)
			{
				break;
			}
			result[rows][cols++] = matrix[i][j];
			if (cols >= size)
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

	int** result = newMatrix(matrix, size, index);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << '\n';
	}


	for (int i = 0; i < size - 1; i++)
	{
		delete[] result[i];
	}
	delete[] result;

	return 0;
}