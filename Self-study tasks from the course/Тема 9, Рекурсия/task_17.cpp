#include <iostream>

// ���������� ������� �� ����������� �� ���������
void moveDisks(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        std::cout << "�������� ���� 1 �� " << fromPeg << " ��� " << toPeg << std::endl;
        return;
    }

    // ����������� �� n-1 ����� �� fromPeg ��� auxPeg, ����������� toPeg ���� �������
    moveDisks(n - 1, fromPeg, auxPeg, toPeg);

    // ����������� �� ���-������� ���� �� fromPeg ��� toPeg
    std::cout << "�������� ���� " << n << " �� " << fromPeg << " ��� " << toPeg << std::endl;

    // ����������� �� n-1 ����� �� auxPeg ��� toPeg, ����������� fromPeg ���� �������
    moveDisks(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n;

    std::cout << "�������� ���� �� ���������: ";
    std::cin >> n;

    // ��������� ������������ �������, �� �� ��������� ������ ������� �� ����� 'A' ��� ����� 'C', ����������� ����� 'B' ���� �������
    moveDisks(n, 'A', 'C', 'B');

    return 0;
}