#include <iostream>

using namespace std;

const int MAX_N = 10;  // ���������� ���� �� ���������

// ������� �� ���������� �� ���������� �� �����-������
void floydWarshall(int graph[MAX_N][MAX_N], int n, bool reach[MAX_N][MAX_N]) {
    // �������������� �� ��������� �� ����������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            reach[i][j] = (graph[i][j] == 1);
        }
    }

    // ��������� �� �����-������ �� ������������
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (reach[i][k] && reach[k][j]) {
                    reach[i][j] = true;
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "�������� ���� �� ���������: ";
    cin >> n;

    int graph[MAX_N][MAX_N];
    bool reach[MAX_N][MAX_N] = { false };  // ������� �� ������������

    cout << "�������� ��������� �� ����� (0 ��� 1): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // ���������� �� ���������� �� �����-������
    floydWarshall(graph, n, reach);

    int u, v;
    cout << "�������� ��� �����, �� ����� �� ��������� ���� ��� ��� (������� �� 0 �� " << n - 1 << "): ";
    cin >> u >> v;

    if (reach[u][v]) {
        cout << "���������� ��� ����� ���� " << u << " � ���� " << v << "." << endl;
    }
    else {
        cout << "���� ��� ����� ���� " << u << " � ���� " << v << "." << endl;
    }

    return 0;
}