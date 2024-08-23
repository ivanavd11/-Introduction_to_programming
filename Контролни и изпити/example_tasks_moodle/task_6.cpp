#include <iostream>

int sumOfDigits(unsigned int num)
{
	int sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	unsigned int num = 815446;
	std::cout << sumOfDigits(num);
	return 0;
}