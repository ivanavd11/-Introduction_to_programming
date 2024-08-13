#include <iostream>
#include <cstring> // �� std::strcmp � std::sprintf


 //������� �� ������������� �� ����� � ���
void intToStr(int num, char* str) {
    std::sprintf(str, "%d", num);
}

 //������� �� ��������� �� ������ (��������������)
int compareStrings(const char* str1, const char* str2) {
    return std::strcmp(str1, str2);
}

void myStrcpy(const char* source, char* dest)
{
    if (!source || !dest)
        return;
    while (*source)
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

 //������� �� ��������� �� ����� �� ����� �� �������������� ���
void sortLex(const int n, int* a) {
     //������������� ������� � ������
    char strArray[10][12]; // ���������� ������� �� ���, �� �� �� ������� ����� �� 10^10
    for (int i = 0; i < n; ++i) {
        intToStr(a[i], strArray[i]);
    }

    // �������������� ��������� �� �������� � ������ �� ������
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (compareStrings(strArray[i], strArray[j]) > 0) {
                // ������� �� ����������
                char temp[12];
                myStrcpy(temp, strArray[i]);
                myStrcpy(strArray[i], strArray[j]);
                myStrcpy(strArray[j], temp);
            }
        }
    }

     //������������� �� �������� ������� � �����
    for (int i = 0; i < n; ++i) {
        a[i] = std::atoi(strArray[i]);
    }
}

int main()
{
    int a[] = { 13, 14, 7, 2018, 9, 0 };
    int n = sizeof(a) / sizeof(a[0]);

    sortLex(n, a);

    // ��������� �� ���������� �����
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

	return 0;
}