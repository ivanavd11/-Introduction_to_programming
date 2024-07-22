#include <iostream>

int maxNumber(int a, int b)
{
	if (a >= b) return a;
	else return b;
}

int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	std::cout << "Max number = " << maxNumber(a, b);
	return 0;
}