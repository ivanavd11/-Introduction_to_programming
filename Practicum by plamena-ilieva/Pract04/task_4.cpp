#include <iostream>

int counterOfDigit(int n)
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
	std::cout << counterOfDigit(n);
	return 0;
}