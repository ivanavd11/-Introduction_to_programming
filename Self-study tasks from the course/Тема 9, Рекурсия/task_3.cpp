#include <iostream>


int gcd(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	if (a > b)
	{
		return gcd(a - b, b);
	}
	else
	{
		return gcd(a, b - a);
	}
}
int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	std::cout << gcd(a, b);
	return 0;
}