#include <iostream>

constexpr int SIZE = 10;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void transpose(int matrix[][SIZE], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) 
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

void reverseRows(int matrix[][SIZE], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size / 2; ++j)
		{
			swap(matrix[i][j], matrix[i][size - 1 - j]);
		}
	}
}

void rotateRight(int matrix[][SIZE], int size)
{
	transpose(matrix, size);
	reverseRows(matrix, size);
}

void printMatrix(int matrix[][SIZE], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << '\n';
	}
}


int main()
{
	int size = 3;
	int matrix[][SIZE] = { {1,2,3},{4,5,6},{7,8,9} };

	rotateRight(matrix, size);

	printMatrix(matrix, size);
	return 0;
}