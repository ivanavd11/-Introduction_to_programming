#include <iostream>

bool isSorted(int n)
{
	int left,right = 0;
	while (n > 0)
	{
		right = n % 10;
		n /= 10;
		left = n % 10;
		if (left > right)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (isSorted(n))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}