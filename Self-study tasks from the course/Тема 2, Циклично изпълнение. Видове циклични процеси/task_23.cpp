#include <iostream>

int main()
{
	double x = 0;
	std::cin >> x;
	double UnixTime = 0;
	for (int i = 1; i > 0; i++)
	{
		UnixTime += 0.25;
		if (UnixTime == x)
		{
			break;
		}
		std::cout << UnixTime << '\n';
	}
}