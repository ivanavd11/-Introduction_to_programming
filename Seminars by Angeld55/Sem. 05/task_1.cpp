#include <iostream>

int concat(int a, int b)
{
	int mult = 1;
	int number2 = b;

	while (b != 0)
	{
		mult *= 10;
		b /= 10;
	}

	return a * mult + number2;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << concat(a, b);
	return 0;
}