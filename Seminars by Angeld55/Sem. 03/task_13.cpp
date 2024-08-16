//не е решена 

#include <iostream>
using namespace std;

void printDumbbell(int n) {
    int width = n * 2 +n-2;

	for (int high = 1; high <= n; high++)
	{
		for (int i = 1; i <= width; i++)
		{
			if ((high == 1 && i <= n) ||
				(high == 1 && i >= n * 2 - 1) ||
				(high == n && i <= n) ||
				(high == n && i >= n * 2 - 1))
			{
				std::cout << ". ";
			}
			else if (high == 1 || high == n)
			{
				std::cout << ". ";
			}

		}

		std::cout << "\n";
	}


}
int main()
{
	unsigned int n;
	std::cin >> n;

    printDumbbell(n);

	return 0;
}