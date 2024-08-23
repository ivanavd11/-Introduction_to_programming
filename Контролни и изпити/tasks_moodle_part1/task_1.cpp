#include <iostream>

int *mergeArrays(int arrNums[], int arrNumsTwo[], int arrNumsSize, int arrNumsTwoSize)
{
	
	int arrMergeSize = arrNumsSize + arrNumsTwoSize;
	int *arrMerge = new int[arrMergeSize];
	
	int idxOfArrMerge = 0;
	for (int i = 0; i < arrNumsSize; i++)
	{
		arrMerge[idxOfArrMerge++] = arrNums[i];
	}

	for (int j = 0; j < arrNumsTwoSize; j++)
	{
		arrMerge[idxOfArrMerge++] = arrNumsTwo[j];
	}

	int min_idx = 0;
	for (int i = 0; i < arrMergeSize - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < arrMergeSize; j++)
		{
			if (arrMerge[j] < arrMerge[min_idx])
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			int temp = arrMerge[min_idx];
			arrMerge[min_idx] = arrMerge[i];
			arrMerge[i] = temp;
		}
	}

	return arrMerge;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 3,4,6,7 };
	int size1 = 5;
	int size2 = 4;
	int* result = mergeArrays(arr1, arr2, size1, size2);
	for (int i = 0; i < size2; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;

	return 0;
}
 