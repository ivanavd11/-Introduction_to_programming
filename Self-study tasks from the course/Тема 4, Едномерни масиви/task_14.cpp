#include <iostream>

constexpr int MAX_SIZE = 50;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isInArray(int* arr, int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] << 1 == number << 1)
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
	int number = 0;
	std::cin >> number;
	std::cout << isInArray(arr, n, number);
	return 0;
}