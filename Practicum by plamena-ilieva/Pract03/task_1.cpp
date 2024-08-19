#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	if (n >= 0 && n <= 255 && m >= 0 && m <= 255)
	{
		for (int i = n; i <= m; i++)
		{
			char ch = i;
			std::cout << i << " --> " << ch;
			std::cout << '\n';
		}
	}
	else
	{
		std::cout << "Invalid codes";
	}
}