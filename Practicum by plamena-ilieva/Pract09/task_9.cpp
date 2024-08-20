#include <iostream>

constexpr int SIZE = 10;

void printSpiral(int matrix[][SIZE], int size)
{
	int top = 0, bottom = size - 1;
	int left = 0, right = size - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        ++top;

        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        --right;

        if (top <= bottom) {
            
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            --bottom;
        }

        if (left <= right) {
          
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            ++left;
        }
    }
}

int main()
{
	int size = 3;
	int matrix[][SIZE] = { {1,2,3},{4,5,6},{7,8,9} };
	printSpiral(matrix, size);
	return 0;
}