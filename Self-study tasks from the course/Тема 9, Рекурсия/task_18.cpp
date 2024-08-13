#include <iostream>

using namespace std;

// Размер на мрежата
const int MAX_N = 100;

// Движенията в осемте възможни посоки (нагоре, надолу, наляво, надясно, и четирите диагонала)
const int dRow[] = { -1, -1, -1,  0,  0,  1,  1,  1 };
const int dCol[] = { -1,  0,  1, -1,  1, -1,  0,  1 };

// Функция за проверка дали дадената клетка е в рамките на мрежата и е запълнена
bool isValid(int row, int col, int n, int grid[MAX_N][MAX_N], bool visited[MAX_N][MAX_N]) {
    return (row >= 0 && row < n && col >= 0 && col < n && grid[row][col] == 1 && !visited[row][col]);
}

// Рекурсивна DFS функция за намиране на размера на областта
int dfs(int row, int col, int n, int grid[MAX_N][MAX_N], bool visited[MAX_N][MAX_N]) {
    visited[row][col] = true;
    int size = 1;  // Започваме с размера 1 за текущата клетка

    // Проверяваме всички 8 възможни посоки
    for (int i = 0; i < 8; i++) {
        int newRow = row + dRow[i];
        int newCol = col + dCol[i];
        if (isValid(newRow, newCol, n, grid, visited)) {
            size += dfs(newRow, newCol, n, grid, visited);
        }
    }

    return size;
}

int main() {
    int n;
    cout << "Въведете размера на мрежата: ";
    cin >> n;

    int grid[MAX_N][MAX_N];
    bool visited[MAX_N][MAX_N] = { false };

    cout << "Въведете мрежата (0 за празна клетка, 1 за запълнена клетка): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int numberOfRegions = 0;
    int sizes[MAX_N * MAX_N];
    int sizeIndex = 0;

    // Обхождаме всички клетки в мрежата
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                numberOfRegions++;
                int size = dfs(i, j, n, grid, visited);
                sizes[sizeIndex++] = size;
            }
        }
    }

    // Резултатите
    cout << "Брой области: " << numberOfRegions << endl;
    cout << "Размер на всяка област: ";
    for (int i = 0; i < numberOfRegions; i++) {
        cout << sizes[i] << " ";
    }
    cout << endl;

    return 0;
}