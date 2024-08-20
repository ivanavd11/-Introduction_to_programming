#include <iostream>

constexpr int SIZE = 10;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void transponireMatrix(int matrix[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}


int main()
{
	int size = 3;
	int matrix[][SIZE] = { {1,2,3},
						   {4,5,6},
						   {7,8,9} };
	transponireMatrix(matrix, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout<<matrix[i][j]<<" ";
		}
		std::cout << '\n';
	}
	return 0;
}