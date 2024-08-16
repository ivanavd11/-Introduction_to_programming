#include <iostream>
using namespace std;

void printSpiral(int n) {
    int matrix[10][10];
    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (value <= n * n) {
        // Запълване на горния ред от ляво на дясно
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        // Запълване на десния стълб от горе надолу
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // Запълване на долния ред от дясно на ляво
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }

        // Запълване на левия стълб отдолу нагоре
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }

    // Отпечатване на матрицата
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printSpiral(n);

    return 0;
}