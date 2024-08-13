#include <iostream>

int minElement(int* arr, int m)
{
	int min = arr[0];
	for (int i = 1; i < m; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int n, m = 0;
	std::cin >> n >> m;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << minElement(matrix[i], m) << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}