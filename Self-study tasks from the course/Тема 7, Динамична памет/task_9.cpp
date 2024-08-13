#include <iostream>

int counterOfNegative(int* arr, int cols)
{
	int counter = 0;
	for (int i = 0; i < cols; i++)
	{
		if (arr[i] < 0)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	const int rows = 3, cols = 4;
	int matrix[rows][cols] = { {5,6,3,8},
		                       {2,-4,3,-8},
		                       {1,6,0,8} };

	for (int i = 0; i < rows; i++)
	{
		std::cout << counterOfNegative(matrix[i], cols) << " ";
	}
	return 0;
}