#include <iostream>

constexpr int SIZE = 1000;

int maxIncreasing(int arr[], int n)
{
	int counter = 0;
	int current = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			counter++;
		}
		else
		{
			if (current < counter)
			{
				current = counter;
			}
		}
	}
	return current;
}
int main()
{
	int n = 0;
	std::cin >> n;
	int arr[SIZE] = {};
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << maxIncreasing(arr, n);
	return 0;
}