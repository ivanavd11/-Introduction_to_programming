#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int* revArr(int* arr, int len, int k)
{
	if (k > len || !arr)
		return nullptr;

	int* result = new int[len];

	int first = k - 1;
	int last = len - 1;

	while (first <= last)
	{
		swap(arr[first], arr[last]);
		first++;
		last--;
	}

	int resultSize = 0;
	for (int i = 0; i < len; i++)
	{
		if (i >= k - 1 && i <= len - 1)
		{
			result[resultSize++] = arr[i];
		}
	}

	for (int i = 0; i < k - 1; i++)
	{
		result[resultSize++] = arr[i];
	}

	return result;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int len = 8;
	int k = 3;
	int* result = revArr(arr, len, k);
	for (int i = 0; i < len; i++)
	{
		std::cout << result[i] << " ";
	}
	delete[]result;
	return 0;
}