#include <iostream>

void printDeliteli(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << " ";
		}
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (n > 0)
	{
		printDeliteli(n);
	}
	else
	{
		std::cout << "Invalid number";
	}
	return 0;
}