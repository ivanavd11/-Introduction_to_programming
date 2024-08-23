#include <iostream>

int maxElement(int* arr, int len)
{
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > result)
		{
			result = arr[i];
		}
	}
	return result;
}

int main()
{
	int arr[] = { 4,6,88,5,3,45,87 };
	int len = 7;
	std::cout << maxElement(arr, len);

	return 0;
}