#include <iostream>


int clearBit(int num, int pos) {
    // ��������� �� �������: 1 << pos �������� ��������� �� �������� �������
    // �������� ������ ������ (~) �� �� ������� ����� � �������� �� �������� �������
    int mask = ~(1 << pos);

    // ��������� �� ������� � �������� AND
    return num & mask;
}

int main() {
    int num = 29; // �������� ������� 29 � ������� ������� � 11101
    int pos = 3;  // �������� �� ��� �� ������� 3 (�������� ������� �� 0)

    std::cout << clearBit(num, pos);
}