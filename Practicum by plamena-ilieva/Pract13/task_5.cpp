#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sorting(int arr[], int size)
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

int main()
{
	int arr[] = { 7,6,4,9,5 };
	int size = 5;
	sorting(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}