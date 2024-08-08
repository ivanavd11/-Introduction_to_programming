#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
int m, n;
int grid[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

// ������� �� ��������� �� ��������� ������ (DFS)
void dfs(int x, int y) {
    // �������� �� ������� � ���� �������� � �������� ��� � '0'
    if (x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || grid[x][y] == 0) {
        return;
    }

    // ��������� �������� ���� ��������
    visited[x][y] = true;

    // ��������� ������ ������� ������ (����, ����, ����, �����)
    dfs(x - 1, y); // ����
    dfs(x + 1, y); // ����
    dfs(x, y - 1); // ����
    dfs(x, y + 1); // �����
}

int main() {
    // ����� ��������� �� ������
    cin >> m >> n;

    // ����� ����������� �� ������
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            visited[i][j] = false; // �������������� ������ ������ ���� ����������
        }
    }

    int regions = 0;

    // ��������� ������ � ������ �������
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                // �������� ���� ������
                dfs(i, j);
                regions++;
            }
        }
    }

    // ��������� ���� �� ���������
    cout << regions << endl;

    return 0;
}