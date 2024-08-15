#include <iostream>

void printReverseNumber(int n)
{
	if (n <= 9)
	{
		std::cout << n;
		return;
	}
	std::cout << n % 10;
	n /= 10;
	printReverseNumber(n);
}

int main()
{
	int n;
	std::cin >> n;
	printReverseNumber(n);
	return 0;
}