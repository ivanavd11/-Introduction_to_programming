#include <iostream>

void binarySearch(int matrix[][10], int n, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == n)
			{
				rows = i;
				cols = j;
				return;
			}
		}
	}


}

int main()
{
	int n = 7;
	int matrix[][10] = { {1,2,3},{4,5,6},{7,8,9} };
	int rows = 3;
	int cols = 3;
	binarySearch(matrix, n, rows, cols);
	std::cout << rows << " " << cols;

	return 0;
}