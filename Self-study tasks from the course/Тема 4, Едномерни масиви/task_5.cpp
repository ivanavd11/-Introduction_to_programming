#include <iostream>

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int maxNumber(int* arr, int n)
{
	int firstNumber = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (firstNumber < arr[i])
		{
			firstNumber = arr[i];
		}
	}
	return firstNumber;
}

int findIndex(int* arr, int n)
{
	int max = maxNumber(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			return i;
		}
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	int* arr = new int[n];
	inputArray(arr, n);
	std::cout << "Max = " << maxNumber(arr, n);
	std::cout << "\nIndex = " << findIndex(arr, n);
	return 0;
}