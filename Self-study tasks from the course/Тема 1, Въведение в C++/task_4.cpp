#include <iostream>

double result(double a, double b)
{
	double c = a + b;
	return c * c * c;
}
int main()
{
	double a, b = 0;
	std::cin >> a >> b;
	std::cout << "Result = " << result(a, b);
	return 0;
}