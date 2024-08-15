#include <iostream>

bool isLowerElements(int arr[],int start, int size)
{
	if (arr[start] > arr[size])
	{
		return false;
	}
	if (size == start)
	{
		return true;
	}

	return isLowerElements(arr, start+1, size - 1);
}

int main()
{
	int arr[] = { 1,2,5,6,4,9 };
	int size = 6;
	std::cout << isLowerElements(arr, 0, size - 1);
	return 0;
}