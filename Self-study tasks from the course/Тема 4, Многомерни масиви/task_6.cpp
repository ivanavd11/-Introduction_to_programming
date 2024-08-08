#include <iostream>

void inputMatrix(int** matrix, int size)
{
	for (int i = 0; i< size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void outputNegativNumbers(int** matrix, int size)
{
	for (int i = 0; i< size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j && matrix[i][j] < 0)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}
}

int main()
{
	int size = 0;
	std::cin >> size;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}
	inputMatrix(matrix, size);

	outputNegativNumbers(matrix, size);


	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}