#include <iostream>

int sum(const int a, const int b)
{
	return a + b;
}

int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	std::cout << sum(a, b);
	return 0;
}