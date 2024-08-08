#include <iostream>

constexpr int MAX_SIZE = 50;

void inputArray(int* arr, int size)
{
	for (int i = 0; i< size; i++)
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

void sortArray(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	
	}
}

void outputArray(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int n=0;
	std::cin >> n;
	int arr[MAX_SIZE] = {};
	inputArray(arr, n);
	sortArray(arr, n);
	outputArray(arr, n);
	return 0;
}