#include <iostream>

int summation(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

int max(int a, int b, int c, int d)
{
	if (a >= b && a >= c && a >= d) return a;
	else if (b >= a && b >= c && b >= d) return b;
	else if (c >= a && c >= b && c >= d) return c;
	else return d;
}

int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	int sum = summation(a, b);
	int sub = subtraction(a, b);
	int mult = multiplication(a, b);
	int div = division(a, b);
	std::cout << "MaxResult = " << max(sum, sub, mult, div);
	return 0;
}