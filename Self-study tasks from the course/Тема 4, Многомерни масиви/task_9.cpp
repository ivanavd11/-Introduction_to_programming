#include <iostream>


int main()
{
	const int k = 3;
	int matrix[k][k] = { {1,2,3},
						 {4,5,6},
						 {7,8,9} };
	int mult = 1;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (i == k - j - 1)
			{
				continue;
			}
			else
			{
				mult *= matrix[i][j];
			}
		}
	}

	std::cout << mult;
	return 0;
}