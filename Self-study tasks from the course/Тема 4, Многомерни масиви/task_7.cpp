#include <iostream>

void inputMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

int sumOfMainDiagonal(int** matrix, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j || i>j)
			{
				sum += matrix[i][j];
			}

		}
	}
	return sum;
}

int main()
{
	int n = 0;
	std::cin >> n;
	
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}

	inputMatrix(matrix, n);
	std::cout<<sumOfMainDiagonal(matrix, n);

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}