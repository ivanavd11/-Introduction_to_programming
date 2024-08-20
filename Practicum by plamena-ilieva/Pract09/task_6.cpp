#include <iostream>

constexpr int SIZE = 10;

int sumOfRow(int matrix[][SIZE], int row, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[row][i];
	}
	return sum;
}

int sumOfCol(int matrix[][SIZE],int col,int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][col];
	}
	return sum;
}

int sumOfFirstDiagonal(int matrix[][SIZE], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

int sumOfSecondDiagonal(int matrix[][SIZE], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == size-1-j)
			{
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

bool isMagicSquere(int matrix[][SIZE], int size)
{
	int sumRow, sumCol = 0;
	for (int i = 0; i < size; i++)
	{
		sumRow = sumOfRow(matrix, i, size);
		for (int j = 0; j < size; j++)
		{
			sumCol = sumOfCol(matrix, j, size);
			if (sumRow != sumCol)
			{
				return false;
			}
		}
	}
	int sumFirst = sumOfFirstDiagonal(matrix, size);
	int sumSecond = sumOfSecondDiagonal(matrix, size);

	return (sumCol == sumFirst && sumSecond == sumFirst);
}

int main()
{
	int size = 4;
	int matrix[][SIZE] = { {16,3,2,13},
						   {5,10,11,8},
						   {9,6,7,12},
						   {4,15,14,1} };
	if (isMagicSquere(matrix, size))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}