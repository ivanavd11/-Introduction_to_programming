#include <iostream>

constexpr int SIZE = 10;

bool isTriangleMatrix(int matrix[][SIZE], int size)
{
	bool result = true;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i > j)
			{
				if (matrix[i][j] != 0)
				{
					result = false;
				}

			}
		}
	}
	return result;
}

int main()
{
	int size = 3;
	int matrix[][SIZE] = { {5,1,5}, 
						   {0,5,9},
						   {0,0,7} };
	std::cout<<isTriangleMatrix(matrix, size);
	return 0;
}