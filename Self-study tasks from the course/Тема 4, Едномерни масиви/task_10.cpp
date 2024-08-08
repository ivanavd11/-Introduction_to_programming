#include <iostream>

constexpr int SIZE = 49;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void copyArray(int* arr,int* newArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
}

bool isDifferent(int* arr, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		int digit = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (digit == arr[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int n = 0;
	std::cin >> n;
	int arr[SIZE] = {};
	inputArray(arr, n);
	std::cout << isDifferent(arr, n);
	return 0;
}