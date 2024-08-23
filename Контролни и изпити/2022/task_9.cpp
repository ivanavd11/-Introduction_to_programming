#include <iostream>

unsigned short int reverseBitwise(unsigned short int num) {
    unsigned short int reversed = 0;
    for (int i = 0; i < 16; ++i) 
    {
        reversed <<= 1;
        reversed |= (num & 1);
        num >>= 1;
    }
    return reversed;
}
int main()
{
	unsigned short int number = 43690;
	unsigned short int reversed = reverseBitwise(number);
	std::cout << "Original: " << number << " (" << std::hex << number << ")" << std::endl;
	std::cout << "Reversed: " << reversed << " (" << std::hex << reversed << ")" << std::endl;
	return 0;
}