#include <iostream>

constexpr int SIZE = 100;

void input(int matrix[][SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void newMatrix(int A[][SIZE], int B[][SIZE], int result[][SIZE], int n, int m, int k)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			result[i][j] = 0;
		}
	}

	// Умножаване на матриците A и B и записване на резултата в C
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int h = 0; h < m; h++) 
			{
				result[i][j] += A[i][h] * B[h][j];
			}
		}
	}
}

void printMatrix(int matrix[][SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int n, m, k;
	std::cin>>n >> m >> k;
	int A[SIZE][SIZE] = {};
	int B[SIZE][SIZE] = {};

	input(A, n, m);
	input(B, m, k);

	int result[SIZE][SIZE] = {};
	newMatrix(A, B, result, n, m, k);

	printMatrix(result, n, k);

	return 0;
}