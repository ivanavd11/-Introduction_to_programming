#include <iostream>

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + sum(n - 1);
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << sum(n);
	return 0;
}