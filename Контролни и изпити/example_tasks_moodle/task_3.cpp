#include <iostream>

double sumOfOddIndex(double arr[], int len)
{
	double sum = 0.0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 != 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}

int main()
{
	double arr[] = { 1.2, 5.9, 4.9, 4, 6, 5.1 };
	int len = 6;
	std::cout << sumOfOddIndex(arr, len);
	return 0;
}