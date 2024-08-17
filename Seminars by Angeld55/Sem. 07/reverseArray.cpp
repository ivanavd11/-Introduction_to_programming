#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArray(int arr[], int size)
{
	int firstIndex = 0;
	int lastIndex = size - 1;

	while(firstIndex<=lastIndex)
	{
		swap(arr[firstIndex], arr[lastIndex]);
		firstIndex++;
		lastIndex--;
	}
}

void outputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = { 3,1,9,8,4,6 };
	int size = sizeof(arr) / sizeof(int);

	reverseArray(arr, size);
	outputArray(arr, size);
	return 0;
}