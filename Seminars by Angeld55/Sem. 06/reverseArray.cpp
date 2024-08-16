#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	
}

void reverseArray(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
	while (start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
void outputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout<< arr[i]<<" ";
	}
}
int main()
{
	int arr[] = { 1,4,5,8,9 };
	int size = sizeof(arr) / sizeof(int);
	reverseArray(arr, size);
	outputArray(arr, size);
	return 0;
}