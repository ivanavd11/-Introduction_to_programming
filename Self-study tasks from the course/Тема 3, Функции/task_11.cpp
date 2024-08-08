#include <iostream>

int counterOfDigits(int number)
{
	int counter = 0;
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return counter;
}

void print(int from, int to)
{
	int number = from;
	while (number <= to)
	{
		if (counterOfDigits(number) == 2)
		{
			int first = number / 10;
			int second = number % 10;
			if (first == second)
			{
				std::cout << number << '\n';
			}
		}
		else if (counterOfDigits(number) == 3)
		{
			int first = number / 100;
			int second = (number / 10) % 10;
			int third = number % 100;
			if (first == second || second == third)
			{
				std::cout << number << '\n';
			}
		}
		number++;
	}
}

int main()
{
	int from, to = 0;
	std::cin >> from>> to;
	print(from, to);
	return 0;
}