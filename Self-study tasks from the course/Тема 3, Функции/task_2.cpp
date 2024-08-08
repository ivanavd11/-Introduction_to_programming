#include <iostream>

bool isEven(const int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int num = 0;
	std::cin >> num;
	if (isEven(num))
	{
		std::cout << "Even\n";
	}
	else
	{
		std::cout << "Odd\n";
	}
	return 0;
}