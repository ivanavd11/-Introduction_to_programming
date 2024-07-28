#include <iostream>

int main()
{
	int n, m = 0;
	std::cin >> n >> m;
	int mult = 1;
	for (int i=0; i <= m; i++)
	{
		mult *= (n + i);
	}
	std::cout << mult;
	return 0;
}