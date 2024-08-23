#include <iostream>

int* mergeArr(int* arr1, int* arr2, int len)
{
	int* result = new int[len];

	for (int i = 0; i < len; i++)
	{
		bool isFound = false;
		for (int j = 0; j < len; j++)
		{
			if (arr2[j] > arr1[i])
			{
				result[i] = j;
				isFound = true;
				break;
			}
		}
		if (!isFound)
		{
			result[i] = -1;
		}
	}

	return result;
}

int main()
{
	int arr1[] = { 22, 5, 17, 8, 90, 7, 12 };
	int arr2[] = { 6, 9, 18, 7, 1, 2, 3 };
	int len = 7;
	int* result = mergeArr(arr1, arr2, len);
	for (int i = 0; i < len; i++)
	{
		std::cout << result[i] << " ";
	}
	delete[] result;
	return 0;
}