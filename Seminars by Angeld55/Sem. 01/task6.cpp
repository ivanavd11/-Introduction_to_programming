#include <iostream>

int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	int result = (a + b) * (a + b) * (a + b) * (a + b) -
		(a - b) * (a - b);
	std::cout << result;
	return 0;
}