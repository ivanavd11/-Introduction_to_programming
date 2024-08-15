#include <iostream>

unsigned short newReverse(unsigned short n)
{
	unsigned short first = 0;
	unsigned short second = 0;
	first = (n << 8);
	second = (n >> 8);

	return (first|second);
}

int main()
{
	unsigned short n = 0;
	std::cin >>std::hex>> n;
	std::cout << std::hex<<newReverse(n);
	return 0;
}