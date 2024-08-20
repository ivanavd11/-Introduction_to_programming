#include <iostream>

bool isSqrt(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	std::cin >> n;
	if (isSqrt(n))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}