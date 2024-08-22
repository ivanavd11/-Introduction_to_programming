#include <iostream>

int AnalyzeArray(int arr[], int l)
{
	if (!arr || l < 1)
	{
		return -1;
	}

	int left = 0;
	int right = 0;
	for (int i = 0; i < l / 2; i++)
	{
		left += arr[i];
	}
	for (int i = l / 2; i < l; i++)
	{
		right += arr[i];
	}
	if (left == right)
		return 1;
	else
		return 0;
}

int main()
{
	int arr[] = { 1,6,1,0,5,199 };
	int l = 6;
	std::cout << AnalyzeArray(arr, l);
	return 0;
}
