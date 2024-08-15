#include <iostream>

constexpr int MAX_SIZE = 1000;

void resultArray(int arr[], int size, int result[], int a, int b)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
		{
			result[counter] = arr[i];
			counter++;
		}
	}

	for (int i = 0; i < counter; i++)
	{
		std::cout << result[i] << " ";
	}
}
int main()
{
	int arr[MAX_SIZE] = {5,7,1,4,3,9,10};
	int result[MAX_SIZE] = {};
	int a, b = 0;
	std::cin >> a >> b;
	resultArray(arr, 7, result, a, b);
	return 0;
}