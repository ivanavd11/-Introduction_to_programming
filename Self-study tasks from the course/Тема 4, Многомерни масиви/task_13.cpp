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

bool isUpperSecondaryTriangular(int** matrix, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isLowerSecondaryTriangular(int** matrix, int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = n - i; j < n; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (isUpperTriangular(matrix, n) || isLowerTriangular(matrix, n) ||
        isUpperSecondaryTriangular(matrix, n) || isLowerSecondaryTriangular(matrix, n)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }


    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}