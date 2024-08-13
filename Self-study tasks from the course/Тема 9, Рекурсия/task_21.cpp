#include <iostream>

using namespace std;

int mystrLen(char* str)
{
	if (!str)
	{
		return 0;
	}
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

bool contains(const char* A,
	          const char* B)
{// ��� B � ������ ���, ������ �� �����, �� �� ������� � A
    if (*B == '\0') {
        return true;
    }

    // ����������� ���� ����� ������ �� A
    while (*A) {
        // ��������� ��������� ��� �������� ������� � A
        const char* start = A;
        const char* pattern = B;

        // ����������� ���� �������� B ������� � ���� �� A
        while (*A && *pattern && *A == *pattern) {
            ++A;
            ++pattern;
        }

        // ��� ��������� ���� �� B, ����� ��� �������� ����������
        if (*pattern == '\0') {
            return true;
        }

        // �������������� A �� �������� �� �������� ���� � ������������ ��� ������� ������
        A = start + 1;
    }

    return false;
}

int main()
{
    char A[] = "tests";
    char B[] = "st";
    cout << contains(A, B);

}