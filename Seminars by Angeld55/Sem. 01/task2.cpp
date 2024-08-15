#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	int first, second, third=0;
	third = n % 10;
	n /= 10;
	second = n % 10;
	n /= 10;
	first = n;
	std::cout << third * 100 + second * 10 + first + 1;
	return 0;
}