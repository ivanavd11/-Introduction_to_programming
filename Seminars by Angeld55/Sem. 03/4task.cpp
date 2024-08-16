#include <iostream>

bool isPrime(int a)
{
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}

void printPrimeDelitel(int& a)
{
	for (int i = a - 1; i > 0; i--)
	{
		if (a % i == 0 && isPrime(i))
		{
			int count = 0;
			while (a % i == 0)
			{
				count++;
				a /= i;
			}

			if (count >= 1)
			{
				std::cout << i;
				if (count >= 2)
					std::cout << "^" << count << " ";
			}
		}
	}
}

int main()
{
	int a;
	std::cin >> a;
	printPrimeDelitel(a);
	return 0;
}