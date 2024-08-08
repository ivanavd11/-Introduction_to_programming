#include <iostream>
using namespace std;

// �������, ����� ��������� ���� ����� ����� � ���������
bool isPalindrome(char arr[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        if (arr[i] != arr[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    char matrix[10][10]; // ������������ N < 10 ������ ��������� �� ��������

    // ��������� �� ���������
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // �������� �� ��������
    for (int i = 0; i < N; ++i) {
        if (!isPalindrome(matrix[i], N)) {
            cout << "No" << endl;
            return 0;
        }
    }

    // �������� �� ��������
    for (int j = 0; j < N; ++j) {
        char col[10];
        for (int i = 0; i < N; ++i) {
            col[i] = matrix[i][j];
        }
        if (!isPalindrome(col, N)) {
            cout << "No" << endl;
            return 0;
        }
    }

    // �������� �� ������� ��������
    char mainDiagonal[10];
    for (int i = 0; i < N; ++i) {
        mainDiagonal[i] = matrix[i][i];
    }
    if (!isPalindrome(mainDiagonal, N)) {
        cout << "No" << endl;
        return 0;
    }

    // �������� �� �������������� ��������
    char secondaryDiagonal[10];
    for (int i = 0; i < N; ++i) {
        secondaryDiagonal[i] = matrix[i][N - 1 - i];
    }
    if (!isPalindrome(secondaryDiagonal, N)) {
        cout << "No" << endl;
        return 0;
    }

    // ��� ������ �������� �������� �������
    cout << "Yes" << endl;
    return 0;
}