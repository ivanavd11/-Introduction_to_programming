#include <iostream>

int powerOfTwo(int k)
{
	return (1 << k);
}

int main()
{
	int k;
	std::cin >> k;
	std::cout << powerOfTwo(k);
	return 0;
}