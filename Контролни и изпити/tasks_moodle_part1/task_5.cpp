#include <iostream>

int** transponire(int n, int matrix[][10])
{
	int** result = new int* [n];
	for (int i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[i][j] = matrix[j][i];
		}
	}

	return result;
}

int main()
{
	int matrix[][10] = { {1,2,3,4},{5,6,7,8},
		               {9,10,11,12},{13,14,15,16} };

	int n = 4;
	int** result = transponire(n, matrix);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout<<result[i][j] << " ";
		}
		std::cout << '\n';
	}
	for (int i = 0; i < n; i++)
	{
		delete[] result[i];
	}
	delete[] result;
	return 0;
}