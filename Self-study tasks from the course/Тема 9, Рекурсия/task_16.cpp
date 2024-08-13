#include <iostream>

// ���������� ������� �� �������� �� ������� � �������� �����
void insertInSortedArray(int arr[], int n, int x) {
    // ��� ��� ���������� ���� �� ������ ��� ������� ����������� �����
    if (n == 0 || arr[n - 1] <= x) {
        arr[n] = x;
        return;
    }

    // ����������� ������� ������� �� ���������� �������
    int lastElement = arr[n - 1];
    insertInSortedArray(arr, n - 1, x);
    arr[n] = lastElement;
}

int main() {
    int n, x;
    std::cin >> n;

    int arr[100];  // ������������, �� ������� ��� ���������� ����� �� ��� �������
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cin >> x;

    insertInSortedArray(arr, n, x);

    for (int i = 0; i <= n; i++) {  // ����������� n+1 ��������
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}