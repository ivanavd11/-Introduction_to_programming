#include <iostream>

constexpr int MAX_SIZE = 10;

void inputMatrix(int matrix[][MAX_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void transponirMatrix(int matrix[][MAX_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			swap(matrix[i][j], matrix[j][i]);	
		}
	}
}

void printMatrix(int matrix[][MAX_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}
int main()
{
	int size;
	std::cin >> size;
	int matrix[MAX_SIZE][MAX_SIZE] = {};
	inputMatrix(matrix, size);
	transponirMatrix(matrix, size);
	printMatrix(matrix, size);


	return 0;

}