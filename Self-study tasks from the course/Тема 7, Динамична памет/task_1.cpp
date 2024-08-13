#include <iostream>

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}
double averageGrade(int* arr, int n)
{
	
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
int main()
{
	int n = 0;
	std::cin >> n;
	int* arr = new int[n];
	inputArray(arr, n);
	std::cout << averageGrade(arr, n);

	delete[] arr;
	return 0;
}