#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a, b = 0;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	swap(a, b);
	std::cout << "newA = " << a << ", newB = " << b << "\n";

	return 0;
}