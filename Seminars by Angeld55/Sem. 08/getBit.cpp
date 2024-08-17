#include <iostream>

int getBit(int num, int pos) 
{
    // ���������� �� �������� ������� � pos ������� � ��������� �� �������� AND � 1
    return (num >> pos) & 1;
}

int main() {
    int num = 29; // �������� ������� 29 � ������� ������� � 11101
    int pos = 3;  // �������� �� ���������� �� ���� �� ������� 3 (�������� ������� �� 0)

    int bitValue = getBit(num, pos);

    std::cout << bitValue << std::endl;
  

    return 0;
}