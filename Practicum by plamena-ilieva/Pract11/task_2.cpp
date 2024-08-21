#include <iostream>

int counterOfNumbers(int* arr1, int size1, int* arr2, int size2, int k)
{
	int counter = 0;
	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] % k == 0)
		{
			counter++;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (arr2[i] % k == 0)
		{
			counter++;
		}
	}
	return counter;
}

int* newArray(int* arr1, int size1,int* arr2,int size2, int k, int &len)
{
	int resultSize = counterOfNumbers(arr1, size1, arr2, size2, k);
	int* result = new int[resultSize];

	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] % k == 0)
		{
			result[len++] = arr1[i];
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (arr2[i] % k == 0)
		{
			result[len++] = arr2[i];
		}
	}

	return result;
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr1[] = { 2,4,5,8 };
	int arr2[] = { 3,16,7,9,10 };
	int k = 2;

	int len = 0;
	int* result = newArray(arr1, 4, arr2, 5, k, len);

	print(result, len);

	return 0;
}