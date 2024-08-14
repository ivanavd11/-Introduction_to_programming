#include <iostream>

int main()
{
	int r, x, y = 0;
	std::cin >> r >> x >> y;
	if (x * x + y * y < r * r)
	{
		std::cout << "In the circle";
	}
	else if (x * x + y * y > r * r)
	{
		std::cout << "Out of the circle";
	}
	else
	{
		std::cout << "On the circle";
	}
	return 0;
}