#include <iostream>

constexpr int SIZE = 1000;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int inversii(int arr[], int size)
{
	int counter = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (i<j && arr[i]>arr[j])
			{
				counter++;
			}
		}
	}


	return counter;
}

int main()
{
	int n;
	std::cin >> n;
	int arr[SIZE] = {};
	inputArray(arr, n);
	std::cout << inversii(arr, n);
	return 0;
}