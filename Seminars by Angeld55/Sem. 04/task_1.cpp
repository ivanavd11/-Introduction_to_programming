#include <iostream>

int absolut(int n)
{
	if (n < 0)
	{
		return -n;
	}
	return n;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << absolut(n);
	return 0;
}