#include <iostream>

int sumOfNumbers(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(int);
	std::cout << sumOfNumbers(arr, size);
	return 0;
}