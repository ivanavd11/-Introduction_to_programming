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

int counterOfK(int arr[], int size, int k)
{
	sort(arr, size);

	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < k && (sum+=arr[i]) < k)
		{
			counter++;
		}
		else
		{
			return counter;
		}
	}
}

int main()
{
	int arr[] = { 39,4,6,1,2,66,33 };
	int size = 7;
	int k = 40;
	std::cout << counterOfK(arr, size, k);
	return 0;
}