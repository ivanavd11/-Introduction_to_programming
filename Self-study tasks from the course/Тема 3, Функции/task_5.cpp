#include <iostream>

double trunc(const double num)
{
	int number = 0;
	number = num;
	return number;
}

int main()
{
	double num = 0;
	std::cin >> num;
	std::cout << trunc(num);
	return 0;
}