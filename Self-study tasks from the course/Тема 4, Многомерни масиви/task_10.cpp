#include <iostream>

int main()
{
	const int rows = 3, cols = 4;
	int matrix[rows][cols] = { {1,2,3,4},
							   {5,6,7,8},
		                       {9,5,1,3} };
	int number = 0;
	std::cin >> number;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == number)
			{
				std::cout << "yes\n";
				return 0;
			}
		}
	}
	std::cout << "no\n";
	return 0;
}