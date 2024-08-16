#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n * 2 - 1; i++)
	{
		for (int j = 1; j <= i;)
		{
			int newJ = j;
			if (j <= n)
			{
				std::cout << j << " ";
				j++;
			}

			else if(newJ >n)
			{
				newJ--;
				j--;
				std::cout << newJ << " ";
			}
			else if (newJ == 1)
			{
				break;
			}
		}

		std::cout << "\n";
	}

	return 0;
}