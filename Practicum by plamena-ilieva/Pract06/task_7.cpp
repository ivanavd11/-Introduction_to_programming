#include <iostream>

constexpr int SIZE = 1000;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int counterOfNegative(int arr[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			counter++;
		}
	}
	return counter;
}

void removeNegativeNumbers(int arr[], int &size)
{
	int negative = counterOfNegative(arr, size);
	for (int i = 0; i<size-1; i++)
	{
		if (arr[i] < 0)
		{
			int next = i + 1;
			while (arr[next] < 0)
			{
				next++;
			}
			swap(arr[i], arr[next]);
		}
	}

	size = size - negative;
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
	int size = 0;
	std::cin >> size;
	int arr[SIZE] = {};
	inputArray(arr, size);
	removeNegativeNumbers(arr, size);
	print(arr, size);
	return 0;
}