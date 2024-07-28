#include <iostream>

int main()
{
	int x = 0;
	std::cin >> x;
	int sum = 1;
	for (int i = 122; i > 0; i -= 2)
	{
		sum = sum*x + i;
	}
	std::cout << sum;
	return 0;
}