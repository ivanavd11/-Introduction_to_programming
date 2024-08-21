#include <iostream>

int** createAdjacencyMatrix(int edges[][2], int numEdges, int& size) {
    // �������� �� ����������� ������ �� ����, �� �� ��������� ������� �� ���������
    int maxVertex = 0;
    for (int i = 0; i < numEdges; i++) {
        if (edges[i][0] > maxVertex) maxVertex = edges[i][0];
        if (edges[i][1] > maxVertex) maxVertex = edges[i][1];
    }
    size = maxVertex + 1; // �������� �� ��������� � ���-�������� ������ + 1

    // �������� �� ����� �� ����������� ������� �� ���������
    int** adjMatrix = new int* [size];
    for (int i = 0; i < size; i++) {
        adjMatrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            adjMatrix[i][j] = 0; // �������������� � ����
        }
    }

    // ��������� �� ��������� � ������������ �� �������
    for (int i = 0; i < numEdges; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // ��� ���� ������ � ���������
    }

    return adjMatrix;
}

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void freeMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    // �������� ����� �� ����
    int edges[][2] = {
        {0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}
    };
    int numEdges = sizeof(edges) / sizeof(edges[0]);

    int size = 0;
    int** adjMatrix = createAdjacencyMatrix(edges, numEdges, size);

    // ���������� �� ��������� �� ���������
    printMatrix(adjMatrix, size);

    // ������������� �� ���������� �����
    freeMatrix(adjMatrix, size);

    return 0;
}