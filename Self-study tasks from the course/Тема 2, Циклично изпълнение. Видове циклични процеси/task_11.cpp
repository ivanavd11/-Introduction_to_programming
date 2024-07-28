#include <iostream>

int countDijit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int count = countDijit(n);
	int m = 0;
	for (int i = 0; i < count; i++)
	{
		m = n % 10;
		std::cout << m;
		n = n / 10;
	}
	return 0;
}