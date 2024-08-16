#include <iostream>

constexpr int SIZE = 1000;

void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

int lcmOfArray(int arr[], int n) {
	int result = arr[0];

	for (int i = 1; i < n; i++) {
		result = lcm(result, arr[i]);
	}

	return result;
}

int main()
{
	int arr[SIZE] = {};
	int size;
	std::cin >> size;
	inputArray(arr, size);
	std::cout << lcmOfArray(arr, size);
	return 0;
}