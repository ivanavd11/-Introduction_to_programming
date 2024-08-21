#include <iostream>

// Функция за конкатениране на два реда
void concatRows(int* row1, int row1Size, int* row2, int row2Size, int*& result, int& resultSize) {
    resultSize = row1Size + row2Size;
    result = new int[resultSize];

    for (int i = 0; i < row1Size; ++i) {
        result[i] = row1[i];
    }
    for (int i = 0; i < row2Size; ++i) {
        result[row1Size + i] = row2[i];
    }
}

// Функция за трансформиране на матрицата
int** transformMatrix(int** matrix, int originalRowCount, int originalColCount, int& newRowCount, int& newColCount) {
    newRowCount = (originalRowCount + 1) / 2;
    newColCount = 2 * originalColCount;

    // Заделяне на памет за новата матрица
    int** newMatrix = new int* [newRowCount];
    for (int i = 0; i < newRowCount; ++i) {
        newMatrix[i] = new int[newColCount];
    }

    // Попълване на новата матрица
    for (int i = 0; i < newRowCount - 1; ++i) {
        int* row1 = matrix[i];
        int* row2 = matrix[originalRowCount - 1 - i];

        int* resultRow;
        int resultSize;
        concatRows(row1, originalColCount, row2, originalColCount, resultRow, resultSize);

        for (int j = 0; j < resultSize; ++j) {
            newMatrix[i][j] = resultRow[j];
        }
        delete[] resultRow;
    }

    // Обработка на последния ред, ако броят на редовете е нечетен
    if (originalRowCount % 2 != 0) {
        int midRow = originalRowCount / 2;
        for (int j = 0; j < originalColCount; ++j) {
            newMatrix[newRowCount - 1][j] = matrix[midRow][j];
        }
    }

    return newMatrix;
}

// Функция за принтиране на матрица
void printMatrix(int** matrix, int rowCount, int colCount) {
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < colCount; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void freeMatrix(int** matrix, int rowCount) {
    for (int i = 0; i < rowCount; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    // Примерна матрица
    int originalRowCount = 5;
    int originalColCount = 2;

    int** matrix = new int* [originalRowCount];
    for (int i = 0; i < originalRowCount; ++i) {
        matrix[i] = new int[originalColCount];
    }

    matrix[0][0] = 0; matrix[0][1] = 1;
    matrix[1][0] = 0; matrix[1][1] = 2;
    matrix[2][0] = 1; matrix[2][1] = 4;
    matrix[3][0] = 1; matrix[3][1] = 5;
    matrix[4][0] = 2; matrix[4][1] = 3;

    int newRowCount;
    int newColCount;
    int** newMatrix = transformMatrix(matrix, originalRowCount, originalColCount, newRowCount, newColCount);

    // Принтиране на новата матрица
    printMatrix(newMatrix, newRowCount, newColCount);

    // Освобождаване на паметта
    freeMatrix(matrix, originalRowCount);
    freeMatrix(newMatrix, newRowCount);

    return 0;
}