#include <iostream>

void transferLastKDigits(int& a, int& b, int k) {
    int power = 1;

    // Изчисляваме 10^k, за да извлечем последните k цифри от `a`
    for (int i = 0; i < k; ++i) {
        power *= 10;
    }

    // Извличаме последните k цифри от `a`
    int lastKDigits = a % power;
    // Премахваме последните k цифри от `a`
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