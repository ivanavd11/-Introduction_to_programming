#include <iostream>

int squareRoot(int n)
{
	int counter = 0;
	do
	{
		counter++;
	}while (counter * counter <= n);
	return counter-1;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << squareRoot(n);
	return 0;
}