#include <iostream>

int powOfK(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n * powOfK(n, k - 1);
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << powOfK(n, k);
	return 0;
}