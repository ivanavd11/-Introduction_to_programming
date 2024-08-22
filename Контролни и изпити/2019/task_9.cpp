#include <iostream>

double calculateMatrix(int **matr, int m)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				sum += matr[i][j];
			}
			if (i == m - 1 - j)
			{
				sum += matr[i][j];
			}
		}
	}

	return sum;

}

int main()
{
	int matrix[][10] = { {1,2,3},{4,5,6},{7,8,9} };
	int m = 3;
	std::cout << calculateMatrix(matrix, m);
	return 0;
}