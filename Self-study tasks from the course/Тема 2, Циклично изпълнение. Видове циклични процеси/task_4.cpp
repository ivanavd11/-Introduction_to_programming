#include <iostream>

int main()
{
	int n, m, k = 0;
	std::cin >> n >> m >> k;
	for (m; m <= n; m = m + k)
	{
		std::cout << m << '\n';
	}
	return 0;
}