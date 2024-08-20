#include <iostream>

constexpr int SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int abs(int n)
{
	if (n < 0)
	{
		return -n;
	}
	return n;
}

void newArray(int arr[], int size, int result[], int &resultSize)
{
	for (int i = 0; i < size-1; i++)
	{
		result[resultSize++] = abs(arr[i] - arr[i + 1]);
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int size;
	std::cin >> size;
	int arr[SIZE] = {};
	input(arr, size);
	int result[SIZE] = {};
	int resultSize = 0;
	newArray(arr, size, result, resultSize);
	print(result, resultSize);
	return 0;
}