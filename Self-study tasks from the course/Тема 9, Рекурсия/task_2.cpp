#include <iostream>

int findSum(int num)
{
	if (num == 1)
	{
		return 1;
	}
	return findSum(num - 1) + num;
}

int main()
{
	int num = 0;
	std::cin >> num;
	std::cout << findSum(num);
	return 0;
}