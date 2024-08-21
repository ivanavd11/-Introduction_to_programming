#include <iostream>

int myStrLen(char* str)
{
	if (!str)
		return 0;
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

char** zigZag(char* str, int numRows, int& numCols)
{
	if (!str)
		return nullptr;
	int len = myStrLen(str);
    int cycleLen = 2 * numRows - 2;

    // Изчисляване на броя на колоните
    numCols = (len / cycleLen) * (numRows - 1) + (len % cycleLen <= numRows ? 1 : (len % cycleLen - numRows + 1));

    // Заделяне на памет за матрицата
    char** matrix = new char* [numRows];
    for (int i = 0; i < numRows; i++) {
        matrix[i] = new char[numCols];
        std::fill(matrix[i], matrix[i] + numCols, ' '); 
    }

    int row = 0, col = 0;
    for (int i = 0; i < len; ++i) {
        matrix[row][col] = str[i];

        // Определяне на следващата позиция
        if (i % cycleLen < numRows - 1) {
            row++; // Слизане надолу по колоната
        }
        else {
            row--; col++; // Движение нагоре по диагонал
        }
    }

    return matrix;
}

void printZigzagMatrix(char** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    char str[] = "PAYPALISHIRING";
    int numRows = 3;
    int numCols = 0;

    char** matrix = zigZag(str, numRows, numCols);

    // Принтиране на матрицата
    printZigzagMatrix(matrix, numRows, numCols);

    // Освобождаване на заделената памет
    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}