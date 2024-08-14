#include <iostream>

constexpr int MAX_SIZE = 1000;

void inputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}
void outputReverseArray(int arr[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
	}
}
int main()
{
	int n;
	std::cin >> n;
	int arr[MAX_SIZE] = {};
	inputArray(arr, n);
	outputReverseArray(arr, n);
	return 0;
}