#include <iostream>

void newNumber(unsigned int& n)
{
	int counter = 0;
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
		counter++;
	}
	int average = sum / counter;

	n = average;
}

int main()
{
	unsigned int num = 188;
	newNumber(num);
	std::cout << num;
	return 0;
}