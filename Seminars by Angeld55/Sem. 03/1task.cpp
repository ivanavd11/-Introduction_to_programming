#include <iostream>

// Функция за намиране на НОД
int gcd(int a, int b)
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Функция за намиране на НОК
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main()
{
	unsigned int a, b;
	std::cin >> a >> b;
	std::cout << lcm(a, b);
	return 0;
}