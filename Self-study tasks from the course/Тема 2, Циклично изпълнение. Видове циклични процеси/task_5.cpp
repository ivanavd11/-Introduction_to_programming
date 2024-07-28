#include <iostream>

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		std::cout << i << " | ";

		for (int j =2 ; j <= 7; j++)
		{
			 std::cout << i * j << " ";
		}
		if (i == 1)
		{
			std::cout << "\n---------------------";
		}
		std::cout << '\n'; 
	}
	return 0;
}