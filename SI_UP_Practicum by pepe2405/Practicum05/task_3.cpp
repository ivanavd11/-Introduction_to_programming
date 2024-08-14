#include <iostream>

constexpr int MAX_SIZE = 1000;
void inputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int counterOfOdd(int arr[], int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			counter++;
		}
	}
	return counter;
}
int counterOfEven(int arr[], int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int arr[MAX_SIZE] = {};
	inputArray(arr, n);
	if (counterOfEven(arr, n) > counterOfOdd(arr, n))
	{
		std::cout << "Even\n";
	}
	else if (counterOfEven(arr, n) < counterOfOdd(arr, n))
	{
		std::cout << "Odd\n";
	}
	else
	{
		std::cout << "Equal\n";
	}
	return 0;
}