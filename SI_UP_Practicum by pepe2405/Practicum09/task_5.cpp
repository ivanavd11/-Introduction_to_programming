#include <iostream>

void outputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << *(arr + i) << " ";
	}
}
int main()
{
	int arr[] = { 1,5,9,6,3 };
	int size = sizeof(arr) / sizeof(int);
	outputArray(arr, size);
	return 0;
}