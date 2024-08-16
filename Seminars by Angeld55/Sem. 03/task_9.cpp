#include <iostream>
using namespace std;

void printPyramid(int n) 
{
    // ����������� �� ������� ���� �� ����������
    for (int i = 1; i <= n; ++i) {
        // ����������� �� �����������
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // ����������� �� ������� � ����
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }

    // ����������� �� ������� ���� �� ����������
    for (int i = n - 1; i >= 1; --i) {
        // ����������� �� �����������
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // ����������� �� ������� � ����
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
	unsigned int n;
	std::cin >> n;
    printPyramid(n);

	return 0;
}