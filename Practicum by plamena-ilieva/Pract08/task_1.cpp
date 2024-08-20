#include <iostream>

int getBitAtPosition(int n, int m) {
	return (n >> m) & 1;
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::cout << getBitAtPosition(n, m);
	return 0;
}