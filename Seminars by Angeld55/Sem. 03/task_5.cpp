#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	bool isPow = true;
	while (n>1)
	{
		if (n % 2 != 0)
		{
			isPow = false;
			break;
		}
		n /= 2;
	}
	if (isPow)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}

	return 0;
}