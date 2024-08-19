#include <iostream>

int main()
{
	int r, x, y;
	std::cin >> r >> x >> y;
	if (r * r == x * x + y*y)
	{
		std::cout << "On the circle";
	}
	else if (r * r < x * x + y * y)
	{
		std::cout << "Out of the circle";
	}
	else
	{
		std::cout << "In the circle";
	}
	return 0;
}