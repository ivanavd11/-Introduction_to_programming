#include <iostream>

int findElement(long arr[], int l)
{
	if (l <= 0)
		return -1;

	int index = -1;
	for (int i = 1; i < l - 1; i++)
	{
		if (arr[i] > (arr[i - 1] + arr[i + 1]) / 2)
		{
			index = i;
		}
	}
	return index;
}

int main()
{
	long arr[] = { 2,3,10,8,1,9 };
	std::cout << findElement(arr, 6);
	return 0;
}