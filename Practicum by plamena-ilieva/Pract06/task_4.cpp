#include <iostream>

constexpr int SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int maxCounterOfDigits(int arr[], int size)
{
	int counter = 1;
	int currentCounter = 0;
	for (int i = 0; i <= size-1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			counter++;
		}

		else if (counter > currentCounter)
		{
			currentCounter = counter;
			counter = 1;
			
		}
		else 
		{ counter = 1; }
	}
	return currentCounter;
}
int main()
{
	int size;
	std::cin >> size;
	int arr[SIZE] = {};
	input(arr, size);
	std::cout << maxCounterOfDigits(arr, size);
	return 0;
}