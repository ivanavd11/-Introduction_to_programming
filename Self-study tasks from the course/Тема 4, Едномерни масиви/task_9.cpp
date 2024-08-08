#include <iostream>

constexpr int SIZE = 49;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isLow(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int size = 0;
	std::cin >> size;
	int arr[SIZE] = {};
	inputArray(arr, size);
	std::cout << isLow(arr, size);
	return 0;
}