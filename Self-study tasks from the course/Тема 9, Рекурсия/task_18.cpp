#include <iostream>

using namespace std;

// ������ �� �������
const int MAX_N = 100;

// ���������� � ������ �������� ������ (������, ������, ������, �������, � �������� ���������)
const int dRow[] = { -1, -1, -1,  0,  0,  1,  1,  1 };
const int dCol[] = { -1,  0,  1, -1,  1, -1,  0,  1 };

// ������� �� �������� ���� �������� ������ � � ������� �� ������� � � ���������
bool isValid(int row, int col, int n, int grid[MAX_N][MAX_N], bool visited[MAX_N][MAX_N]) {
    return (row >= 0 && row < n && col >= 0 && col < n && grid[row][col] == 1 && !visited[row][col]);
}

// ���������� DFS ������� �� �������� �� ������� �� ��������
int dfs(int row, int col, int n, int grid[MAX_N][MAX_N], bool visited[MAX_N][MAX_N]) {
    visited[row][col] = true;
    int size = 1;  // ��������� � ������� 1 �� �������� ������

    // ����������� ������ 8 �������� ������
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
    cout << "�������� ������� �� �������: ";
    cin >> n;

    int grid[MAX_N][MAX_N];
    bool visited[MAX_N][MAX_N] = { false };

    cout << "�������� ������� (0 �� ������ ������, 1 �� ��������� ������): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int numberOfRegions = 0;
    int sizes[MAX_N * MAX_N];
    int sizeIndex = 0;

    // ��������� ������ ������ � �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                numberOfRegions++;
                int size = dfs(i, j, n, grid, visited);
                sizes[sizeIndex++] = size;
            }
        }
    }

    // �����������
    cout << "���� �������: " << numberOfRegions << endl;
    cout << "������ �� ����� ������: ";
    for (int i = 0; i < numberOfRegions; i++) {
        cout << sizes[i] << " ";
    }
    cout << endl;

    return 0;
}