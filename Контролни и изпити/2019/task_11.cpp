#include <iostream>

bool AnalyzeArr(int arr[], int length)
{
	if ( !arr || length < 1)
	{
		return false;
	}

	int counter0fSpecial = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == arr[i])
		{
			counter0fSpecial++;
		}
	}

	if (counter0fSpecial >= 2)
	{
		return true;
	}
	return false;
}

int main()
{
	int arr[] = {1,1,5,3,8};
	int len = 5;
	std::cout << AnalyzeArr(arr, len);
	return 0;
}