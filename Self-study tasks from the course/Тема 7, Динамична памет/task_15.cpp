#include <iostream>

const int n = 3, m = 4;

bool isLower(int matrix[n][m], int n, int m)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < m-1; j++)
		{
			if (matrix[i][j] > matrix[i+1][j + 1])
			{
				return false;
			}

		}
	}
	return true;
}

int main()
{
	
	int matrix[n][m] = {{1,2,3,4},
						{5,0,7,8},
						{9,9,9,9} };
	std::cout << isLower(matrix, n, m);
	return 0;
}