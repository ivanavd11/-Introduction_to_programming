#include <iostream>

constexpr int MAX_SIZE = 1000;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

double averageSum(int arr[], double size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

void abs(double& n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n;
}

int findClosestToAverage(int arr[], int size, double average) {
	int closest = arr[0];
	double minDiff = abs(arr[0] - average);

	for (int i = 1; i < size; ++i) {
		double diff = abs(arr[i] - average);
		if (diff < minDiff) {
			minDiff = diff;
			closest = arr[i];
		}
	}

	return closest;
}

int main()
{
	int size;
	std::cin >> size;
	int arr[MAX_SIZE] = {};
	inputArray(arr, size);
	double average = averageSum(arr, size);
	std::cout << average << "\n";
	std::cout << findClosestToAverage(arr, size, average);
	return 0;
}