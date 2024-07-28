#include <iostream>

int main()
{
	int n,m = 0;
	std::cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> m;
		sum += m;
	}
	std::cout << sum;
	return 0;
}