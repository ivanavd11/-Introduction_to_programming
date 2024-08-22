#include <iostream>

void swap(long& a, long& b)
{
	long temp = a;
	a = b;
	b = temp;
}

void ConvertArr(long arr[], long S, long E)
{
	if (S < 0 || E < 0 || S >= E) 
	{
		return;
	}

	int left = S;
	int right = E;
	for (int i = left; i <= (E+S)/2; i++)
	{
		swap(arr[i], arr[right]);
		right--;
	}
}

int main()
{
	long arr[] = { 4, 5, 6, 7, 8, 9, 0, 1 };
	ConvertArr(arr, 2, 5);
	for (int i = 0; i < 8; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}