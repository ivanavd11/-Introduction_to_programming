#include <iostream>

int max(int a, int b, int c)
{
	if (a >= b && a >= c) return a;
	else if (b >= a && b >= c) return b;
	else return c;
}

int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	std::cout << "Max = " << max(a, b, c);
	return 0;
}