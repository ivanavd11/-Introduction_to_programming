#include <iostream>

int counterOfEqual(int arr[], int size)
{
	int counter = 1;
	int current = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			counter++;
		}
		else
		{
			if (counter > current)
			{
				current = counter;
			}
			counter = 1;
		}
	}
	return current;
}

int main()
{
	int arr[] = {3,3,2,2,2,5,2,2,3,3,3};
	int size = sizeof(arr) / sizeof(int);
	std::cout << counterOfEqual(arr, size);
	return 0;
}