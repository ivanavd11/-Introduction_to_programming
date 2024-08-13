#include <iostream>

int pow(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}

	if (n > 0) 
	{
		return x * pow(x, n - 1);
	}

	return x * 1 / pow(x, n + 1);
}
int main()
{
	int x, n = 0;
	std::cin >> x >> n;
	std::cout << pow(x, n);
	return 0;
}