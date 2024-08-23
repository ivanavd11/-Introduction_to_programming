#include <iostream>

int sumOfEvenElements(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}

int main()
{
	int arr[] = { 1,9,4,7,9,6 };
	int len = 6;
	std::cout << sumOfEvenElements(arr, len);
	return 0;
}