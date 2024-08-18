#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int number = b / a;
	std::cout << ((number == c / b) && (number == d / c));
	return 0;
}