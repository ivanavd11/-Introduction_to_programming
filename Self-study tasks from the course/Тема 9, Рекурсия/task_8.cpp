#include <iostream>

int mult(int n)
{
	if (n < 10)
	{
		return n;
	}
	return (n % 10) * mult(n / 10);
}

int main()
{
	int n = 12345;
	std::cout << mult(n);
	return 0;
}