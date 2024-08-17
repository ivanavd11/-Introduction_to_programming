#include <iostream>

int setBitValue(int num, int pos, int value)
{
    if (value == 0) {
        // Ако стойността е 0, нулираме бита чрез маска с побитово AND
        int mask = ~(1 << pos);
        num = num & mask;
    }
    else {
        // Ако стойността е 1, задаваме бита чрез маска с побитово OR
        int mask = 1 << pos;
        num = num | mask;
    }
    return num;

}

int main()
{
	int num = 29;
	int pos = 3;
	int value = 0;

	std::cout << setBitValue(num, pos, value);
	return 0;
}