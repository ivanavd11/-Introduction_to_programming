#include <iostream>

void swap(int& n, int& m)
{
	n = n ^ m;
	m = n ^ m;
	n = n ^ m;
}
int main()
{
	int n, m;
	std::cin >> n >> m;
	swap(n, m);
	std::cout << n << " " << m;
	return 0;
}