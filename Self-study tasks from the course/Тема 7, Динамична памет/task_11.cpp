#include <iostream>

const int n = 3, m = 4;

bool isNegativ(int matrix[][m], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < 0)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int matrix[n][m] = { {1,2,3,4},
						 {5,6,7,8},
						 {9,1,2,3} };
	std::cout << isNegativ(matrix, n, m);

	return 0;
}