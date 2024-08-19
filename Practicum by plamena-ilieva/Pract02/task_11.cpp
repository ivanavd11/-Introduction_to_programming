#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int a, b;
	a = n % 10;
	n /= 10;
	b = n % 10;
	n /= 10;
	b = b + (n % 10) * 10;
	n /= 10;
	a = a + (n % 10) * 10;
	if (a > b)
	{
		std::cout << a << " > " << b;
	}
	else
	{
		std::cout << a << " < " << b;
	}
	return 0;
}