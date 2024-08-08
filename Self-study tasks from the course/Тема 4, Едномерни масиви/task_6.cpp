#include <iostream>

constexpr int MAX_SIZE = 100;

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int equal(int* arr1, int* arr2, int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n ; j++) {
			if (arr1[i] == arr2[j]) {
				counter++;
				while (arr1[i] == arr1[i + 1]) {
					i++;
				}
				while (arr2[j] == arr2[j + 1]) {
					j++;
				}
			}
		}
	}

	return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int arr1[MAX_SIZE] = {};
	int arr2[MAX_SIZE] = {};
	inputArray(arr1, n);
	inputArray(arr2, n);
	std::cout << equal(arr1, arr2, n);
	return 0;
}