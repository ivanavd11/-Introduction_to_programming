#include <iostream>
using namespace std;

bool isIncreasingDiagonal(int matrix[][10], int N, int M, int startRow, int startCol) {
    int row = startRow;
    int col = startCol;

    while (row < N - 1 && col < M - 1) {
        if (matrix[row][col] >= matrix[row + 1][col + 1]) {
            return false;
        }
        row++;
        col++;
    }
    return true;
}

bool checkDiagonals(int matrix[][10], int N, int M) {
    // Проверка на диагоналите, започващи от първата колона
    for (int i = 0; i < N; i++) {
        if (!isIncreasingDiagonal(matrix, N, M, i, 0)) {
            return false;
        }
    }
    // Проверка на диагоналите, започващи от първия ред
    for (int j = 1; j < M; j++) {
        if (!isIncreasingDiagonal(matrix, N, M, 0, j)) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    int matrix[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    if (checkDiagonals(matrix, N, M)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}