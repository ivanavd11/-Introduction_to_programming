#include <iostream>

bool isInfics(int n, int k)
{
	if (k > n)
	{
		return false;
	}

	bool isNot = false;
	while (k != 0 && n!=0)
	{
		while (k % 10 == n % 10)
		{
			k /= 10;
			n /= 10;
			if (k == 0)
			{
				isNot = true;
			}
		}
		if (n == k)
		{
			return true;
		}

		n /= 10;
	}
	return isNot;
}

int main()
{
	int n, k = 0;
	std::cin >> n >> k;
	if (isInfics(n, k)) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
	return 0;
}