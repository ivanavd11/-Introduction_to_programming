#include <iostream>

int averageSum(int* arr, int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum / len;
}

int counterEven(int* arr, int len)
{
	int even = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
	}
	return even;
}

int* newArr(int* arr, int len)
{
	if (!arr)
		return nullptr;
	int average = averageSum(arr, len);
	int size = counterEven(arr, len);

	int* result = new int[size];

	int resultSize = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			result[resultSize++] = arr[i] + average;
		}
	}

	return result;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int len = 8;
	int* result = newArr(arr, len);
	for (int i = 0; i < 4; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}