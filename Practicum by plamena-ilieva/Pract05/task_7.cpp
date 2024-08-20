#include <iostream>

void transferLastKDigits(int& a, int& b, int k) {
    int power = 1;

    // ����������� 10^k, �� �� �������� ���������� k ����� �� `a`
    for (int i = 0; i < k; ++i) {
        power *= 10;
    }

    // ��������� ���������� k ����� �� `a`
    int lastKDigits = a % power;
    // ���������� ���������� k ����� �� `a`
    a /= power;

    int original_b = b;
    int temp = 1;
    while (b != 0)
    {
        b /= 10;
        temp *= 10;
    }
    
    b = original_b;
    b = b + lastKDigits * temp;
}


int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;

    transferLastKDigits(a, b, k);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

	return 0;
}