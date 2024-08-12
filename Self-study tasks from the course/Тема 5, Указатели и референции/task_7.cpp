#include <iostream>

// ��������� ������ ��� ����������:
// 1. pointer - ����������, ����� ������ �� ��������
// 2. targetAddress - �������, ��� ����� ������ �� ������� ���������

bool isPointerPointingToAddress(const void* pointer, const void* targetAddress) {
    return (pointer == targetAddress);
}

int main() {
    int x = 10;
    int* ptr = &x;
    int* anotherPtr = &x;

    // �������� ���� ���������� ptr ���� ��� ������������ x
    if (isPointerPointingToAddress(ptr, &x)) {
        std::cout << "ptr is pointing to the address of x\n";
    }
    else {
        std::cout << "ptr is NOT pointing to the address of x\n";
    }

    // �������� ���� ���������� anotherPtr ���� ��� ������������ x
    if (isPointerPointingToAddress(anotherPtr, &x)) {
        std::cout << "anotherPtr is pointing to the address of x\n";
    }
    else {
        std::cout << "anotherPtr is NOT pointing to the address of x\n";
    }

    return 0;
}