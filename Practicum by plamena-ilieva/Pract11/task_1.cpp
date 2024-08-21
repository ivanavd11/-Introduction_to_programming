#include <iostream>

void input(int* arr, int n)
{
	for (int i = 0; i < n; i++)
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

void reverse(int* arr, int n)
{
	int last = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		swap(arr[i], arr[last]);
		last--;
	}

}

void printReverseArray(int* arr, int n)
{
	reverse(arr, n);
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	input(arr, n);
	printReverseArray(arr, n);

	delete[]arr;
	return 0;
}