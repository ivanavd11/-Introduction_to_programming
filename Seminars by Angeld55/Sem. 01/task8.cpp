#include <iostream>

int main()
{
	int a, b = 0;
	std::cin >> a >> b;

	bool isFirstBigger = a > b;

	std::cout << a * isFirstBigger + b * !isFirstBigger;
	return 0;
}