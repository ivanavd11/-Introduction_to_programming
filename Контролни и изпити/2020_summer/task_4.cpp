#include <iostream>

int maxElement(int* arr, int size)
{
	int maxEl = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxEl)
		{
			maxEl = arr[i];
		}
	}
	return maxEl;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void convertMax(int* arr, int N)
{
	int maxNumber = maxElement(arr, N);

	for (int i = 0; i < N; i++)
	{
		if (arr[i] != maxNumber)
		{
			arr[i] += maxNumber;
		}
	}

	int last = N - 1;
	for (int i = 0; i < N / 2; i++)
	{
		swap(arr[i], arr[last]);
		last--;
	}
}

int main()
{
	int arr[] = { 11, 5, 2, 27, 4, 8, 2 };
	int size = 7;
	convertMax(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}