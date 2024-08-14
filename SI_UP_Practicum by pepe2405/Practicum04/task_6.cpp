#include <iostream>

int sumOfNums(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum > 9)
	{
		int newSum = 0;
		while (sum > 0)
		{
			newSum += sum % 10;
			sum /= 10;
		}
		return newSum;
	}
	else
	{
		return sum;
	}
	
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << sumOfNums(n);
	return 0;
}