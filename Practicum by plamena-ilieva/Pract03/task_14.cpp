#include <iostream>
#include <iomanip>  // �� setw
int main()
{
	int n;
	std::cin >> n;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // �������� ���-������ ��� ������ �������
        for (int i = left; i <= right; i++) {
            std::cout << std::setw(3) << num++;  // ���������� setw �� ������������
        }
        top++;
        std::cout << std::endl;

        // �������� ���-������� ������ ������ ������
        for (int i = top; i <= bottom; i++) {
            std::cout << std::setw(3) << num++;
            if (i != bottom) std::cout << std::endl;
        }
        right--;
        std::cout << std::endl;

        // �������� ���-������ ��� ������� ������
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                std::cout << std::setw(3) << num++;
            }
            bottom--;
            std::cout << std::endl;
        }

        // �������� ���-������ ������ ������ ������
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                std::cout << std::setw(3) << num++;
                if (i != top) std::cout << std::endl;
            }
            left++;
            std::cout << std::endl;
        }
    }
	return 0;
}