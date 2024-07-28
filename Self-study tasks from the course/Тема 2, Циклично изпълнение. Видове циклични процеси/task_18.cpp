#include <iostream>

int main()
{
	int n = 0;
	int mult = 1;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;
		if (n < 0)
		{
			--i;
			continue;
		}
		mult *= n;
	}
	std::cout << mult;
	return 0;
}