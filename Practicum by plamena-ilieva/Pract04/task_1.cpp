#include <iostream>

int abs(int num)
{
	if (num < 0)
	{
		return -num;
	}
	return num;
}

double fabs(double num)
{
	if (num < 0)
	{
		return -num;
	}
	return num;
}

int main()
{
	double n;
	std::cin >> n;
	std::cout << fabs(n);
}