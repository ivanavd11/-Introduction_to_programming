#include <iostream>

int main()
{
	int arr[] = { -10,10,-2,11,-22 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 1; i < size - 1; i++)
	{
		if ((arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1]) ||
			(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]))
		{
			continue;
		}
		else
		{
			std::cout << "no";
			return 0;
		}
	}
	std::cout << "yes";
	return 0;
}