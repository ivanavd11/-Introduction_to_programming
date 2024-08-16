#include <iostream>

constexpr int SIZE = 1000;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int gcdArray(int arr[], int size)
{
	int result = arr[0];

	for (int i = 1; i < size; i++)
	{
		result = gcd(result, arr[i]);
	}

	return result;
}

int main()
{
	int size;
	std::cin >> size;
	int arr[SIZE] = {};
	inputArray(arr, size);

	std::cout << gcdArray(arr, size);
	return 0;
}