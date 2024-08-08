#include <iostream>

int abs(const int num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

int main()
{
	int num = 0;
	std::cin >> num;
	std::cout << abs(num);
	return 0;
}