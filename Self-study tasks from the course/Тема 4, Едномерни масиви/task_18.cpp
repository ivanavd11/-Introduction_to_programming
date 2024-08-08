#include <iostream>

constexpr int MAX_SIZE = 1024;

int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

bool isValid(int n, int k)
{
	if (n >= 2 && n <= 1024)
	{
		if (gcd(n, k) == 1)
		{
			return true;
		}
	}
	return false;
}

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void outputArray(int* arr, int n, int k)
{
	int result[MAX_SIZE] = {};
	
	int size = 0;
	for (int i = 0; size < n; i=i+k)
	{
		if (i == 0)
		{
			result[0] = arr[0];
		}
		else if (i > n)
		{
			if (i - n > n)
			{
				result[size] = arr[i - n - n];
			}
			else
				result[size] = arr[i-n];
		}
		else
		{
			result[size] = arr[i];
		
		}
		size++;
	}

	for (int i = 0; i <n; i++)
	{
		std::cout << result[i]<<" ";
	}
}

int main()
{
	int n, k = 0;
	std::cin >> n >> k;
	if (isValid(n, k))
	{
		int arr[MAX_SIZE] = {};
		inputArray(arr, n);
		outputArray(arr, n, k);
	}
	else
	{
		std::cout << "Invalid input\n";
	}
	return 0;
}