#include <iostream>

constexpr int SIZE = 1000;

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
int main()
{
	int size;
	std::cin >> size;
	int arr[SIZE] = {};
	inputArray(arr, size);
	outputArray(arr, size);
	return 0;
}