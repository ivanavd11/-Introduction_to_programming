#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			result = result + j;
		}
	}
	std::cout << result;
	return 0;
}