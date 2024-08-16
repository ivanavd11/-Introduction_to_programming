#include <iostream>

int pow(int n, int k)
{
	int result = 1;
	while (k != 0)
	{
		result = result * n;
		k--;
	}
	return result;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << pow(n, k);
	return 0;
}