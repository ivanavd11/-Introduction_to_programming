#include <iostream>

int operatorForDevisiour(int a, int b)
{
	int num = a / b;
	return (a - b * num);
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << operatorForDevisiour(a, b);
	return 0;
}