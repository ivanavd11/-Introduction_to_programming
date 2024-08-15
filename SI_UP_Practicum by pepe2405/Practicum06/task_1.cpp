#include <iostream>

constexpr int SIZE = 1000;

void removeElement(int arr[], int index)
{
	for (int i = 0; i < 8-1; i++)
	{
		if (i >= (index - 1))
		{
			arr[i] = arr[i + 1];
		}
	}
}
int main()
{
	int arr[SIZE] = { 33,1,23,8,54,5,1,6};
	int index = 4;
	removeElement(arr, index);
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}