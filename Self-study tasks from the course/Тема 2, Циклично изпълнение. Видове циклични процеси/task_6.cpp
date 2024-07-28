#include <iostream>

int main()
{
	int m, n= 0;
	std::cin >> m >> n;
	int sum = 0;
	for (m; m <=n; m++)
	{
		sum += m;
		std::cout << m << " + ";
		if (m == n)
		{
			std::cout << ++m;
			sum += m;
		}
	}
	std::cout << " = " << sum;
	return 0;
}