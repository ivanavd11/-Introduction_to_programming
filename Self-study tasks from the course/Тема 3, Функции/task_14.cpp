#include <iostream>

using namespace std;

// ������� �� �������� �� ��� � ���������� �� ������
int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// ������� �� �������� �� ���
int lcm(int a, int b) 
{
    return (a / gcd(a, b)) * b;
}

int main() {
    int N;
    cin >> N;

    int* numbers = new int[N]; // ��������� �������� �� ����� �� ����� �� N �����
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int result_gcd = numbers[0];
    int result_lcm = numbers[0];

    for (int i = 1; i < N; ++i) {
        result_gcd = gcd(result_gcd, numbers[i]);
        result_lcm = lcm(result_lcm, numbers[i]);
    }

    cout << "NOD " << result_gcd << endl;
    cout << "NOK " << result_lcm << endl;

    delete[] numbers; // ������������� �� ���������� �����

    return 0;
}