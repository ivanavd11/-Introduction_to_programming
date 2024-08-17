#include <iostream>

int codNumber(int n, int k)
{
	int number = 0;
	for (int i = 0; i < k; i++)
	{
		int digit = n & (1 << i);
		number = number + digit;
	}
	return number;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << codNumber(n, k);
	return 0;
}