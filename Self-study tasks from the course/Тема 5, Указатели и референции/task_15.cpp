#include <iostream>

void causeSegfaultIfFive(int number) {
    if (number == 5) {
        int* ptr = nullptr;  // ��������, ����� ���� ��� ��������� ����� (nullptr)
        *ptr = 42;  // ���� �� ����� �� �������� �� ��������� �����, ����������� �������������� ������
    }
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    causeSegfaultIfFive(num);

    std::cout << "Function executed without segfault." << std::endl;

    return 0;
}