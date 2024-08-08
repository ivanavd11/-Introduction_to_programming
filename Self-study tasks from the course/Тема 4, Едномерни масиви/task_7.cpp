#include <iostream>

constexpr int MAX_SIZE = 49;

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int counterOfDigit(int* arr, int n, int number)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == number)
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
	int number = 0;
	std::cin >> number;
	std::cout << counterOfDigit(arr, n, number);
	return 0;
}