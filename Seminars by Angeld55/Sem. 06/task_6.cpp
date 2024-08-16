#include <iostream>
constexpr int SIZE = 1000;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int removeMinElement(int arr[], int size)
{
	for (int i = arr[0]; i <= arr[size - 1]; i++)
	{
		bool isInArray = false;
		for (int j = 0; j < size; j++)
		{
			if (arr[j] == i)
			{
				isInArray = true;
			}
		}
		if (!isInArray)
		{
			return i;
		}
	}

}

int main()
{
	int n;
	std::cin >> n;
	int arr[SIZE] = {};
	inputArray(arr, n);
	std::cout << removeMinElement(arr, n);
	return 0;
}