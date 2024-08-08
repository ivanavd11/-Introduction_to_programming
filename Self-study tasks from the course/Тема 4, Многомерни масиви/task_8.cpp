#include <iostream>

void inputMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

int sumOfIndex(int** matrix, int size, int number)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i + j == number)
			{
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}
int main()
{
	int n = 0;
	std::cin >> n;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}

	inputMatrix(matrix, n);
	int number = 0;
	std::cin >> number;
	std::cout << sumOfIndex(matrix, n, number);

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


	return 0;
}