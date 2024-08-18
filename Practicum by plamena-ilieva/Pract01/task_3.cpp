#include <iostream>

int main()
{
	double a, b;
	std::cin >> a >> b;
	std::cout << "Perimeter: " << 2 * (a + b) << "\n";
	std::cout << "Area: " << a * b;
	return 0;
}