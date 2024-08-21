#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
}

int minElement(int arr[], int size)
{
	sort(arr, size);

	for (int i = 0; i <= 9; i++)
	{
		bool isFound = false;
		for (int j = 0; j < size; j++)
		{
			if (arr[j] == i)
			{
				isFound = true;
				break;
			}
		}
		if (!isFound)
		{
			return i;
		}
	}
}

int main()
{
	int arr[] = { 0,6,3,2,1 };
	int size = 5;
	std::cout << minElement(arr, size);
	return 0;
}