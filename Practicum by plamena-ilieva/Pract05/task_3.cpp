#include <iostream>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void commonFraction(int &a, int &b)
{
	int num = gcd(a, b);
	a = a / num;
	b = b / num;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	commonFraction(a, b);
	std::cout << a << " " << b;
	return 0;
}