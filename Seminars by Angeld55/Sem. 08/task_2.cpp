#include <iostream>

int counterOfOneBits(int n)
{
	int counter = 0;
	while (n != 0)
	{
		int temp = n;
		if (temp & 1)
		{
			counter++;
		}
		n= n >> 1;
	}
	return counter;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << counterOfOneBits(n);
	return 0;
}