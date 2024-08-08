#include <iostream>

bool isValidateN(int n)
{
	return (n > 0 && n < 24);
}

void inputArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
}

int sumPositiv(int* arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}

int counterOfNegativ(int* arr, int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (isValidateN(n))
	{
		int* arr = new int[n];
		inputArray(arr, n);
		std::cout << "SumOfPositiv = " << sumPositiv(arr, n);
		std::cout << "\nCounterOfNegativ = " << counterOfNegativ(arr, n);
 
		delete[] arr;
	}
	else
	{
		std::cout << "Invalid input.\n";
	}
	return 0;
}