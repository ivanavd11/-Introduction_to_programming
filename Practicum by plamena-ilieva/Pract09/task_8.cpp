#include <iostream>

constexpr int SIZE = 100;

void newMatrix(int A[][SIZE], int row1, int col1,
	int B[][SIZE], int row2, int col2,
	int C[][SIZE])
{
	if (col1 != row2)
	{
		return;
	}

	for (int i = 0; i < row1; ++i) {
		for (int j = 0; j < col2; ++j)
		{
			C[i][j] = 0;
		}
	}

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			for (int k = 0; k < col1; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void print(int matrix[][SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			{
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}
}
int main()
{
	int row1 = 5;
	int col1 = 2;
	int row2 = 2;
	int col2 = 3;
	int A[][SIZE] = { {1,2},{8,9},{10,0},
					  {1,0},{2,2} };

	int B[][SIZE] = { {1,2,3},{4,5,6}};

	int C[SIZE][SIZE];

	newMatrix(A, row1, col1, B, row2, col2, C);
	print(C, row1, col2);
	return 0;
}