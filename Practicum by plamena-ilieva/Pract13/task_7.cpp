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
		int maxIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[maxIndex] < arr[j])
			{
				maxIndex = j;
			}
		}
		if (maxIndex != i)
		{
			swap(arr[maxIndex], arr[i]);
		}
	}
}

int kNumber(int arr[], int size, int k)
{
	sort(arr, size);

	return arr[k - 1];
}

int main()
{
	int arr[] = { 39,4,6,1,2,66,33 };
	int size = 7;
	int k = 3;
	std::cout << kNumber(arr, size, k);
	return 0;
}