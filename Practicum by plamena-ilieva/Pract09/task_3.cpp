#include <iostream>

constexpr int SIZE = 10;

void printZicZac(int matrix[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % 2 == 0)
			{
				std::cout << matrix[i][j] << " ";
			}
			else
			{
				std::cout << matrix[i][size - j - 1] << " ";
			}
		}
		std::cout << '\n';
	}
}

int main()
{
	int size = 3;
	int matrix[][SIZE] = { {1,2,3},
						   {4,5,6},
					       {7,8,9} };
	printZicZac(matrix, size);
	
	return 0;
}