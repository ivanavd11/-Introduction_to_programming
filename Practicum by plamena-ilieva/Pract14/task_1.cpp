#include <iostream>

int sumOfN(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + sumOfN(n - 1);
}

int main()
{
	int n = 5;
	std::cout << sumOfN(n);
	return 0;
}