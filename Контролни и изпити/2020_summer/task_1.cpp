#include <iostream>

int largestSeq(int arr[], int N)
{
	int sum = 0;
	int current = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
		else
		{
			if (sum > current)
			{
				current = sum;
			}
			sum = 0;
		}
	}
	return current;
}

int main()
{
	int arr[] = { 2, 4, 3, 11, 12, 168, 144, 5, 9, 62, 98, 1 };
	int size = 12;
	std::cout << largestSeq(arr, size);

	return 0;
}