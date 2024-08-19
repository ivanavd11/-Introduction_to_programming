#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int result = 0;
	int temp = 0;
	for (int i = 1; i <= n; i++)
	{
		temp = temp * 10 + 9;
		result += temp;
	}
	std::cout << result;
	return 0;
}