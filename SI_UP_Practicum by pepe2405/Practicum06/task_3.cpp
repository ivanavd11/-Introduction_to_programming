#include <iostream>

bool isSimetric(int arr[], int size)
{
	int last = size - 1;
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[last])
		{
			return false;
		}
		last--;
	}
	return true;
}

int main()
{
	int arr[] = { 1,2,3,4,1 };
	int size = sizeof(arr) / sizeof(int);
	if (isSimetric(arr, size))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}