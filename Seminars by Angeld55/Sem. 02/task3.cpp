#include <iostream>

int main()
{
	double speed = 0;
	std::cin >> speed;
	if (speed <= 10)
	{
		std::cout << "slow";
	}
	else if (speed > 10 && speed <= 50)
	{
		std::cout << "average";
	}
	else if (speed > 50 && speed <= 150)
	{
		std::cout << "fast";
	}
	else if (speed > 150 && speed <= 1000)
	{
		std::cout << "ultra fast";
	}
	else
	{
		std::cout << "extremely fast";
	}
	return 0;
}