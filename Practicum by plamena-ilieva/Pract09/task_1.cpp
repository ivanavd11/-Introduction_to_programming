#include <iostream>

constexpr int SIZE = 100;

int minElement(int matrix[][SIZE], int size)
{
	int minEl = INT16_MAX;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] < minEl)
			{
				minEl = matrix[i][j];
			}
		}
	}
	return minEl;
}
int main()
{
	int size = 3;
	int matrix[SIZE][SIZE] = { {3,5,1}
							  ,{6,2,4}
							  ,{9,0,8} };
	std::cout << minElement(matrix, size);
	return 0;
}