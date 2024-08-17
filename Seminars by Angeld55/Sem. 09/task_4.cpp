#include <iostream>

const double EPSILON = 1e-9; // Толеранс за проверка на нулевост

bool nearlyZero(double value) {
    return (value < 0 ? -value : value) < EPSILON;
}

bool inverseMatrix(double matrix[][3], double inverse[][3], int n) {
    double augmented[3][6]; // Удвоена матрица, съставена от оригиналната и единичната матрица

    // Създаваме разширената матрица [A | I]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            augmented[i][j] = matrix[i][j];
            augmented[i][j + n] = (i == j) ? 1.0 : 0.0;
        }
    }

    // Привеждаме до единична матрица чрез Гаус-Жорданов метод
    for (int i = 0; i < n; i++) {
        // Намерете максималния елемент в текущата колона за по-добра числова стабилност
        double maxElement = nearlyZero(augmented[i][i]) ? 0.0 : augmented[i][i];
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (!nearlyZero(augmented[k][i]) && augmented[k][i] > maxElement) {
                maxElement = augmented[k][i];
                maxRow = k;
            }
        }

        // Ако максималният елемент е близо до нула, матрицата не е обратима
        if (nearlyZero(augmented[maxRow][i])) {
            return false;
        }

        // Разменяме редовете за по-добра стабилност
        for (int k = 0; k < 2 * n; k++) {
            double temp = augmented[i][k];
            augmented[i][k] = augmented[maxRow][k];
            augmented[maxRow][k] = temp;
        }

        // Нормализираме текущия ред
        double divisor = augmented[i][i];
        for (int k = 0; k < 2 * n; k++) {
            augmented[i][k] /= divisor;
        }

        // Правим всички други елементи в текущата колона нули
        for (int j = 0; j < n; j++) {
            if (j != i) {
                double factor = augmented[j][i];
                for (int k = 0; k < 2 * n; k++) {
                    augmented[j][k] -= factor * augmented[i][k];
                }
            }
        }
    }

    // Копираме инвертираната част на разширената матрица в резултатната матрица
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = augmented[i][j + n];
        }
    }

    return true;
}

void printMatrix(double matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 3;

    double matrix[3][3] = {
        {4, 7, 2},
        {3, 6, 1},
        {2, 5, 2}
    };

    double inverse[3][3];

    if (inverseMatrix(matrix, inverse, n)) {
        std::cout << "Inverse matrix:" << std::endl;
        printMatrix(inverse, n);
    }
    else {
        std::cout << "The matrix is not invertible." << std::endl;
    }

    return 0;
}