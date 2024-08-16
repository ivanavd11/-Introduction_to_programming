#include <iostream>

constexpr int MAX_SIZE = 1000;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void outputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout<< arr[i]<<" ";
	}
}

int linearSearch(int arr[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int size;
	std::cin >> size;
	int arr[MAX_SIZE] = {};
	inputArray(arr, size);
	std::cout <<"Index: "<< linearSearch(arr, size, 5);
	return 0;
}