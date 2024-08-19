#include <iostream>

int main()
{
	int arr[] = { -10,10,-2,11,-22 };
	int size = sizeof(arr) / sizeof(int);
	bool result = true;
	for (int i=1; i < size-1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] < arr[i + 1])
		{
			result = false;
		}
		else if (arr[i]<arr[i - 1] && arr[i]>arr[i + 1])
		{
			result = false;
		}
	}
	std::cout << result;
	return 0; 
}