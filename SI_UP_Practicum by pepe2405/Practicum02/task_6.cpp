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
	std::cin >> a >> b;
	if (a > b)
	{
		swap(a, b);
	}
	std::cout << "a: " << a;
	std::cout << "\nb: " << b;
	return 0;
}