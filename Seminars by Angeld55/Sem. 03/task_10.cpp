#include <iostream>

using namespace std;

void printSpiral(int n) {
    int matrix[10][10];
    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (value <= n * n) {

        // ��������� �� ����� ����� ������ ������
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;

        // ��������� �� ������ ��� �� ���� �� �����
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        // ��������� �� ������ ����� �� ���� ������
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // ��������� �� ������ ��� �� ����� �� ����
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;

       
    }

    // ����������� �� ���������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
	unsigned int n;
	std::cin >> n;

    printSpiral(n);
	return 0;
}