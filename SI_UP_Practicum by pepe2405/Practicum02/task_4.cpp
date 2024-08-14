#include <iostream>

bool isSame(int n)
{
	int first, second, third = 0;
	third = n % 10;
	n /= 10;
	second = n % 10;
	n /= 10;
	first = n;
	return (first == second || first == third || second == third);
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (isSame(n))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}