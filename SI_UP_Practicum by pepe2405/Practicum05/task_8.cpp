#include <iostream>

bool isPrime(int n)
{
	if (n == 1)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int counterOfPrime(int arr[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (isPrime(arr[i]))
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	const int size = 10;
	int arr[size] = {1,2,3,4,5,20,40,50,25,100 };
	std::cout << counterOfPrime(arr, size);
	return 0;
}