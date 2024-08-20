#include <iostream>

constexpr int MAX_SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isSorted(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for(int j=i+1; j<size;j++)
		{ 
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int size;
	std::cin >> size;
	int arr[MAX_SIZE] = {};
	input(arr, size);
	std::cout<<isSorted(arr, size);
	return 0;
}