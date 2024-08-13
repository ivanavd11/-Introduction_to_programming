#include <iostream>

bool binarySearch(int arr[], int left, int right, int x) {
    if (left > right) {
        return false;  // ��������� �� � �������
    }

    int mid = left + (right - left) / 2;

    // ����������� ���� �������� ������� � ���������
    if (arr[mid] == x) {
        return true;
    }

    // ��� x � ��-����� �� ������� �������, ������ � ������ ��������
    if (arr[mid] > x) {
        return binarySearch(arr, left, mid - 1, x);
    }

    // ��� x � ��-������ �� ������� �������, ������ � ������� ��������
    return binarySearch(arr, mid + 1, right, x);
}

int main()
{
	int x = 8;
	int arr[] = { 1,3,4,6,8,9 };
    int size = 6;
    std::cout << binarySearch(arr, 0, size - 1, x);
	return 0;
}