// не е решена

#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;

	for (int j = 1; j <= n; j++)
	{
		int counter = 1;
		for (int i = 1; i <= n*2-1; i++)
		{
			if (i != n)
			{
				std::cout << " ";
			}
			else if(i>1)
			{

				std::cout << counter << j;
				counter++;
			}
			else
			{
				std::cout << j;
				counter--;
			}
		}
		counter = 1;
		std::cout << "\n";
	}
	return 0;
}