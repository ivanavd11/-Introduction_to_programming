#include <iostream>

int countOfDigit(int number)
{
	int count = 0;
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	return count;
}

int main()
{
	int sum = 0;
	for (int i = 100; i < 1000; i++)
	{
		int number = i;
		for (int j = 0; j < 3; j++)
		{
			int digit = number % 10;
			sum += digit;
			number /= 10;
		}
		if (countOfDigit(sum) == 2)
		{
			std::cout << i<<"\n";
		}
		sum = 0;
	
	}
	return 0;
}