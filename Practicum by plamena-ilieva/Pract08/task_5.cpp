#include <iostream>

int changeBitByPosition(int n, int p, int b)
{
    if (b == 1) {
        return n | (1 << p);
    }
    else {
        
        return n & ~(1 << p);
    }
}

int main()
{
	int n, p, b;
	std::cin >> n >> p >> b;
    std::cout << changeBitByPosition(n, p, b);
	return 0;
}