#include <iostream>

int counterDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return counter;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << counterDigit(n);

	return 0;
}