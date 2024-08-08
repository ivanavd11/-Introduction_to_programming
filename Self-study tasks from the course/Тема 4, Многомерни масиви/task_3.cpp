#include <iostream>

int sum(int* arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	const int N = 3, M = 4;
	int arr[N][M] = { {5, 0, 3, 8}, {2, 3, 4, -8}, {1, 8, 6, 0} };
	for (int i = 0; i < N; i++)
	{
		std::cout << sum(arr[i], M) << " ";
	}
	
	return 0;
}