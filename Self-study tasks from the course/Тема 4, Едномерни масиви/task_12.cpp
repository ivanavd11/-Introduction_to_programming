#include <iostream>

constexpr int MAX_SIZE = 50;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isZero(int* arr, int size)
{
	for (int i = 0; i<size-1; i++)
	{
		if (arr[i] == 0 && arr[i+1]==0)
		{
			return true;
		}
	}

	return false;
}
int main()
{
	int n = 0;
	std::cin >> n;
	int arr[MAX_SIZE] = {};
	inputArray(arr, n);
	std::cout << isZero(arr, n);
	return 0;
}