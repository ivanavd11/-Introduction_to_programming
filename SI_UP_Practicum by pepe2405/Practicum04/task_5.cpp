#include <iostream>

int toSqrt(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (i * i > n)
		{
			return i - 1;
		}
	}
}
int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << toSqrt(n);
	return 0;
}