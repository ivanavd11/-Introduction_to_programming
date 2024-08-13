#include <iostream>

using namespace std;

const int MAX_N = 10;  // Максимален брой на градовете

// Функция за изпълнение на алгоритъма на Флойд-Уоршал
void floydWarshall(int graph[MAX_N][MAX_N], int n, bool reach[MAX_N][MAX_N]) {
    // Инициализиране на матрицата за достъпност
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            reach[i][j] = (graph[i][j] == 1);
        }
    }

    // Алгоритъм на Флойд-Уоршал за достижимости
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
    cout << "Въведете броя на градовете: ";
    cin >> n;

    int graph[MAX_N][MAX_N];
    bool reach[MAX_N][MAX_N] = { false };  // Матрица за достижимости

    cout << "Въведете матрицата на графа (0 или 1): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Извършване на алгоритъма на Флойд-Уоршал
    floydWarshall(graph, n, reach);

    int u, v;
    cout << "Въведете два града, за които да проверите дали има път (индекси от 0 до " << n - 1 << "): ";
    cin >> u >> v;

    if (reach[u][v]) {
        cout << "Съществува път между град " << u << " и град " << v << "." << endl;
    }
    else {
        cout << "Няма път между град " << u << " и град " << v << "." << endl;
    }

    return 0;
}