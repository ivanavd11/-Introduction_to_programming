#include <iostream>

bool isOnCircle(int a, int b, int c, int d)
{
	if (a * a + b * b == c * c + d * d)
	{
		return true;
	}
	return false;
}

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (isOnCircle(a, b, c, d))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}