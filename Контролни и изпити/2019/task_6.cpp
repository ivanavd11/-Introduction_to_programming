#include <iostream>

int countOfDigit(long num)
{
	int counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

int NumCalc(long num, int k, int l)
{
	int counterDigit = countOfDigit(num);
	if (counterDigit <= k || counterDigit <= l || k < 1 || l < 1)
	{
		return -1;
	}

	char* number = new char[counterDigit + 1];

	for (int i = counterDigit-1;i>=0;i--)
	{
		number[i] = (num % 10) + '0';
		num /= 10;
	}
	number[counterDigit] = '\0';

	int sum = 0;
	sum = (number[k-1] - '0') + (number[l-1] - '0');
	delete[] number;

	return sum;

}

int main()
{
	long num = 12345;
	int l = 1;
	int k = 3;
	std::cout << NumCalc(num, k, l);
	return 0;
}