#include <iostream>

const int n = 4;

bool isSimetric(int matrix[][n], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int matrix[n][n] = {{9,2,3,4},
						{2,9,3,4},
						{0,3,9,5},
						{4,4,5,9} };

	std::cout << isSimetric(matrix, n);

	return 0;
}