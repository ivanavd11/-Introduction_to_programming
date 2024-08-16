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

int log(int n, int k)
{
	for (int i = 1; i <= k; i++)
	{
		int powOfN = pow(n, i);
		if (powOfN >= k)
		{
			return (i-1);
		}
	}
}

int main()
{
	int n; int k;
	std::cin >> k >> n;
	std::cout << log(n, k);
	return 0;
}