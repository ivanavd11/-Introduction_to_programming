#include <iostream>

const int rows = 3;
const int cols = 4;

bool isNegativ(int matrix[][cols], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
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
	
	int matrix[rows][cols] = { {1,2,3,-4},{5,6,7,8},{1,2,3,5} };
	if (isNegativ(matrix, rows, cols))
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}
	return 0;
}