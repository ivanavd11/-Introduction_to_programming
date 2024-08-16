#include <iostream>

int countDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return counter;
}

int concatNumber(int a, int b)
{
	int multiplier = 1;
	while (b >= multiplier) {
		multiplier *= 10;
	}

	return a * multiplier + b;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << concatNumber(a, b);
	return 0;
}