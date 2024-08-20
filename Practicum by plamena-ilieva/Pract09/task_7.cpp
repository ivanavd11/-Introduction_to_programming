#include <iostream>

const int SIZE = 10;

void sumOfMatrics(int A[][SIZE], int B[][SIZE], int C[][SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void print(int matrix[][SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << '\n';
	}
}

void multWithNumber(int matrix[][SIZE], int rows, int cols, int number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = matrix[i][j] * number;
		}
		
	}
}
int main()
{
	/*int rows = 2;
	int cols = 3;
	int A[][SIZE] = { {1,2,3},{4,5,6} };
	int B[][SIZE] = { {5,6,7},{8,9,10} };
	int C[SIZE][SIZE] = {};

	sumOfMatrics(A, B, C, rows, cols);
	print(C, rows, cols);*/

	int rows = 2;
	int cols = 3;
	int A[][SIZE] = { {1,2,3},{4,5,6} };
	int number = 3;
	multWithNumber(A, rows, cols, number);
	print(A, rows, cols);
	return 0;
}
