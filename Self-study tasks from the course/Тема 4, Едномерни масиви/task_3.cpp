#include <iostream>

bool isValid(int n)
{
	return (n > 1 && n < 50);
}

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int sum(int* arr1, int* arr2, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr1[i] * arr2[i];
	}
	return sum;
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (isValid(n))
	{
		int* arr1 = new int[n];
		int* arr2 = new int[n];
		inputArray(arr1, n);
		inputArray(arr2, n);
		std::cout << sum(arr1, arr2, n);

		delete[] arr1;
		delete[] arr2;

	}
	else
	{
		std::cout << "Invalid input.\n";
	}
	return 0;
}