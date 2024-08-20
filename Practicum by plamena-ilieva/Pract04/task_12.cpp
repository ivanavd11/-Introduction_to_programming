#include <iostream>

int concat(int first, int second)
{
	int temp = 1;
	int original_first = first;
	while (first != 0)
	{
		first /= 10;
		temp=temp*10;
	}

	return original_first * temp + second;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << concat(a, b);
	return 0;
}