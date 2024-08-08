#include <iostream>

const int max_size = 10;

void inputMatrix(int matrix[][max_size], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

bool isValid(int n, int m, int p, int q)
{
	return (n > 0 && m > 0 && p > 0 && q > 0 &&
		n <= 10 && m <= 10 && p <= 10 && q <= 10 &&
		m == p);
}

void mult(int A[][max_size], int n, int m,
	     int B[][max_size], int p, int q)
{
	int C[max_size][max_size];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < q; j++) {
			C[i][j] = 0;
			for (int k = 0; k < m; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// Извеждане на резултатната матрица C
	std::cout << "C:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < q; j++) {
			std::cout << C[i][j] << " ";
		}
		std::cout <<"\n";
	}


}
int main()
{
	int n, m, p, q = 0;
	std::cin >> n >> m;
	int A[max_size][max_size] = {};
	int B[max_size][max_size] = {};
	inputMatrix(A, n, m);
	std::cin >> p >> q;
	inputMatrix(B, p, q);
	if (isValid(n, m, p, q))
	{
		mult(A, n, m, B, p, q);
	}
	else
	{
		std::cout << "Invalid input or imposible\n";
	}
	return 0;
}