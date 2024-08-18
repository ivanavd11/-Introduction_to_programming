#include <iostream>

int main()
{
	double a, b;
	std::cin >> a >> b;
	double temp = a;
	a = b;
	b = temp;
	std::cout << a << " " << b;
	return 0;
}