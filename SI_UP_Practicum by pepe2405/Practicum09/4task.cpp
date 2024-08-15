#include <iostream>
using namespace std;

// ������� �� �������� ���� 8-������ ����� � ���������
bool isBitPalindrome(unsigned short n) {
    unsigned short reversed = 0;
    unsigned short original = n;

    // ������� �� �������� �� `n` ���� �������� ��������
    for (int i = 0; i < 8; ++i) {
        if(n==0)
        {
            break;
        }
        reversed <<= 1;           // ����������� �� reversed ������
        reversed |= (n & 1);      // �������� �� ���-������� ��� �� `n` ��� reversed
        n >>=1;                  // ����������� �� `n` �������
    }

    // �������� ���� ���������� � ����� �� ������������ �����
    return (reversed == original);
}

int main() {
    unsigned short n;
    cin >> n;

    if (isBitPalindrome(n)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}