#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			bool isPrime = true;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
				}
			}
			if (!isPrime)
			{
				continue;
			}
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
	return 0;
}