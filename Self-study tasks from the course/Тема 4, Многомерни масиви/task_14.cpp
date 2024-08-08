#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
int m, n;
int grid[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

// Функция за обхождане на съседните клетки (DFS)
void dfs(int x, int y) {
    // Проверка за граници и дали клетката е посетена или е '0'
    if (x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || grid[x][y] == 0) {
        return;
    }

    // Маркираме клетката като посетена
    visited[x][y] = true;

    // Обхождаме всички съседни клетки (горе, долу, ляво, дясно)
    dfs(x - 1, y); // горе
    dfs(x + 1, y); // долу
    dfs(x, y - 1); // ляво
    dfs(x, y + 1); // дясно
}

int main() {
    // Четем размерите на масива
    cin >> m >> n;

    // Четем стойностите на масива
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            visited[i][j] = false; // Инициализираме всички клетки като непосетени
        }
    }

    int regions = 0;

    // Обхождаме масива и търсим области
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                // Намираме нова област
                dfs(i, j);
                regions++;
            }
        }
    }

    // Извеждаме броя на областите
    cout << regions << endl;

    return 0;
}