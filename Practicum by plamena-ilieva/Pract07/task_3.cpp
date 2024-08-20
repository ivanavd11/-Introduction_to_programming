#include <iostream>

// ������� �� �������� �� ��� ����� � K-���� ������ �������
void addKSystem(char arr1[], char arr2[], int size, int K, char res[]) {
    int carry = 0;  // ��������� ��� ���������

    for (int i = size - 1; i >= 0; --i) {
        int digit1 = arr1[i] - '0';  // ������������� ������� � ����� �� ������ �����
        int digit2 = arr2[i] - '0';  // ������������� ������� � ����� �� ������ �����

        int sum = digit1 + digit2 + carry;  // �������� ������� � �����������
        res[i] = (sum % K) + '0';  // ���������� ���� �� ������ ��������� � ��������� ���� ������
        carry = sum / K;  // ����������� ������ ���������
    }
}

int main()
{
    char arr1[] = { '1', '7', '5' };  // ������� ����� � K-���� ������ �������
    char arr2[] = { '5', '3', '7' };  // ������� ����� � K-���� ������ �������
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int K = 8;  // ������ �� �������� �������
    char res[3];  // ����� �� ���������

    addKSystem(arr1, arr2, size, K, res);
    std::cout << res;
	return 0;
}