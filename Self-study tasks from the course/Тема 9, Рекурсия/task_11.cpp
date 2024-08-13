#include <iostream>

bool isElementInSequence(int arr[], int n, int x) {
    if (n == 0)
        return false;  // ���������� � �������� �� �������� ��� �� �� ������ x
    if (arr[n - 1] == x)
        return true;  // ��������� � �������
    return isElementInSequence(arr, n - 1, x);  // ������������ �� ������ � ��-������ ������
}

int main()
{
	int number = 3;
	int arr[] = { 1,2,3,4,9,6 };
	std::cout << isElementInSequence(arr, 6, number);
	return 0;
}