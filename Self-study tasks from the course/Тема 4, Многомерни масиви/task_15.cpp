#include <iostream>
using namespace std;

const int MAX_M = 100;
const int MAX_N = 100;

int main() {
    int M, N;
    cin >> M >> N;

    int A[MAX_M][MAX_N];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    int P, Q;
    cin >> P >> Q;

    // Частични суми
    int sum[MAX_M + 1][MAX_N + 1] = { 0 };

    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            sum[i][j] = A[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }

    int maxSum = -1000000000; // или друга достатъчно малка стойност

    for (int i = P; i <= M; ++i) {
        for (int j = Q; j <= N; ++j) {
            int currentSum = sum[i][j] - sum[i - P][j] - sum[i][j - Q] + sum[i - P][j - Q];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    cout << maxSum << endl;

    return 0;
}