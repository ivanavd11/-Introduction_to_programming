#include <iostream>

bool isTriangle(int a, int b, int c)
{
	return (a + b > c && b + c > a && a + c > b);
}

int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	if (isTriangle(a, b, c))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}