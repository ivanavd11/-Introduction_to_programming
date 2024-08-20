#include <iostream>

const int SIZE = 10;

void printDiagonals(int matrix[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}
	std::cout << '\n';

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == size-j-1)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}
}

int main()
{
	int size = 3;
	int matrix[][SIZE] = { {1,2,3},
					   {4,5,6},
					   {7,8,9} };
	printDiagonals(matrix,size);
	return 0;
}