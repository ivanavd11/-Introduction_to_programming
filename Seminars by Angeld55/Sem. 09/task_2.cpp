#include <iostream>

bool isReflexive(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] != 1) {
            return false; // Ако има елемент по диагонала, който не е 1
        }
    }
    return true;
}

bool isSymmetric(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false; // Ако има елемент (i, j) различен от (j, i)
            }
        }
    }
    return true;
}

bool isTransitive(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (matrix[j][k] == 1 && matrix[i][k] != 1) {
                        return false; // Ако има нарушение на транзитивността
                    }
                }
            }
        }
    }
    return true;
}

bool isEquivalenceRelation(int matrix[][3], int n) {
    return isReflexive(matrix, n) && isSymmetric(matrix, n) && isTransitive(matrix, n);
}

int main() {
    int n = 3;

    int matrix[3][3] = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };

    if (isEquivalenceRelation(matrix, n)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}