#include <iostream>

int operatorForDelenie(int a, int b)
{
	int num = 0;
	while (a >= b)
	{
		a = a - b;
		num++;
	}
	return num;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << operatorForDelenie(a, b);
	return 0;
}