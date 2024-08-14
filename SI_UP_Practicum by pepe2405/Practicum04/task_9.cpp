#include <iostream>

void isSumN(int n)
{
	int* arr = new int[n * 2];
	for (int i = 0; i < n * 2; i++)
	{
		std::cin >> arr[i];
	}

	int first, second;
	for (int i = 0; i < 2*n-1; i+=2)
	{
		first = arr[i];
		second = arr[i + 1];
		if (first + second == n)
		{
			std::cout << "yes ";
		}
		else
		{
			std::cout << "no ";
		}
		
	}
	delete[]arr;
}
int main()
{
	int n;
	std::cin >> n;
	isSumN(n);
	return 0;
}