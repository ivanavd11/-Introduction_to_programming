#include <iostream>

bool isIn(int n, int m, int x)
{
	return (n < m && n <= x && x <= m);
}

int main()
{
	int n, m, x;
	std::cin >> n >> m >> x;
	if (isIn(n, m, x))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}