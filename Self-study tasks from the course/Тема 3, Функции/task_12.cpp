#include <iostream>

bool validate(int m, int n, int k)
{
	if (m>0 && n>m && n<=1000000 && k>0 && k<10)
	{
		return true;
	}
	return false;
}

int average(int number)
{
	int counter = 0;
	int sum = 0;
	while (number != 0)
	{
		counter++;
		sum = sum + (number % 10);
		number /= 10;
	}

	return sum / counter;
}

void print(int m, int n, int k)
{
	if (validate(m, n, k))
	{
		int num = 0;
		num = m;
		while (num <= n)
		{
			if (average(num) >= k)
			{
				std::cout << num << '\n';
			}
			num++;
		}
	}
	else
	{
		std::cout << "Invalid input.\n";
	}
}

int main()
{
	int m, n, k;
	std::cin >> m >> n >> k;
	print(m, n, k);
	return 0;
}