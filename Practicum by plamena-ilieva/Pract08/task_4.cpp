#include <iostream>

void swap(int& a, int& b)
{
	a = a ^ b;
	b = b ^ a;
	a = b ^ a;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	swap(a, b);
	std::cout << a << " " << b;
	return 0;
}