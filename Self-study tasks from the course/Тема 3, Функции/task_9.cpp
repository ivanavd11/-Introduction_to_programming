#include <iostream>

int askUser(const int from, const int to)
{
	int num = 0;
	std::cin >> num;
	while (num<from ||  num>to)
	{
		std::cin >> num;
	}

	return num;
}

int main()
{
	int from, to;
	std::cin >> from >> to;
	std::cout<< askUser(from, to);
	return 0;
}