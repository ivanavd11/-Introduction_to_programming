#include <iostream>

int indexOfNumber(int arr[], int size, int n)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] <= n && n <= arr[i + 1])
		{
			return i+1;
		}
	}
}

int main()
{
	int arr[] = { 1,2,5,6,7,8,9 };
	int size = 7;
	int number = 4;
	std::cout << indexOfNumber(arr, size, number);
	return 0;
}