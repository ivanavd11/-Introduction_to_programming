#include <iostream>

constexpr int SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArrayByN(int arr[], int size, int n)
{
	int last = n - 1;
	for (int i = 0; i < n/2; i++)
	{
		swap(arr[i], arr[last]);
		last--;
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout<<arr[i]<<" ";
	}
}

int main()
{
	int size;
	std::cin >> size;
	int arr[SIZE] = {};
	input(arr, size);
	int n;
	std::cin >> n;
	reverseArrayByN(arr, size, n);
	print(arr, size);
	return 0;
}