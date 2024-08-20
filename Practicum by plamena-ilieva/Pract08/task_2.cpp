#include <iostream>

int extractBits(int x, int m, int n) {

    int shifted = x >> m;

    int mask = (1 << n) - 1;

    return shifted & mask;
}

int main()
{
	int x, m, n;
	std::cin >> x >> m >> n;
	std::cout << extractBits(x, m, n);
	return 0;
}