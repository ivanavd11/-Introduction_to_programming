#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	swap(a, b);
	std::cout << a << " " << b;
	return 0;
}