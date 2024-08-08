#include <iostream>

int main()
{
	const int rows = 3, cols = 3;
	int matrix[rows][cols] = { {1,2,3},{4,5,6},{1,9,5} };
	int number = 0;
	std::cin >> number;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (number == matrix[i][j])
			{
				std::cout << "Yes\n";
				return 0;
			}
		}
	}
	std::cout << "No\n";
	return 0;
}