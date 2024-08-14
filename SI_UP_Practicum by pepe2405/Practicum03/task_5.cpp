#include <iostream>

int minElement(int* arr, int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int maxElement(int* arr, int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "MIN: " << minElement(arr, n);
	std::cout << "\nMAX: " << maxElement(arr, n);

	delete[]arr;
	return 0;
}