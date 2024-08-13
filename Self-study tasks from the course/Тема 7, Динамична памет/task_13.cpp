#include <iostream>

using namespace std;

bool isUpperTriangular(int** matrix, int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isLowerTriangular(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isUpperTriangularSecondary(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - i; j < n; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isLowerTriangularSecondary(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isTriangularMatrix(int** matrix, int n) {
    return isUpperTriangularSecondary(matrix, n) || isLowerTriangularSecondary(matrix, n)
           || isUpperTriangular(matrix, n) || isLowerTriangular(matrix, n);
}

int main() {
    int n;
    cin >> n;

    // Allocate memory for the matrix
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }

    // Input the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Check if the matrix is triangular with respect to secondary diagonal
    if (isTriangularMatrix(matrix, n)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}