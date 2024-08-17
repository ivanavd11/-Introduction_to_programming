#include <iostream>

int setToDifferentBit(int n)
{
	// Извличане на най-десния бит, който е 1
	int rightmostSetBit = n & (-n);

	// Обръщане на този бит
	return n ^ rightmostSetBit;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << setToDifferentBit(n);
	return 0;
}