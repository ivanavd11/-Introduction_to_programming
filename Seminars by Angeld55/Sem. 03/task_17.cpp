#include <iostream>

int main()
{
	int counter;
	int first, second;
	
	std::cin >> counter;
	std::cin >> first >> second;
	int max1, max2;
	if (first > second)
	{
		max1 = first;
		max2 = second;
	}
	else
	{
		max1 = second;
		max2 = first;
	}
	counter-=2;
	while (counter != 0)
	{
		std::cin >> first >> second;
		if (max1 < first && first>second)
		{
			max1 = first;
			if (max2 < second)
			{
				max2 = second;
			}
		}
		if (max1 < second && second>first)
		{
			max1 = second;
			if (max2 < first)
			{
				max2 = first;
			}
		}
		if (max2 < second && second < first)
		{
			max2 = second;
		}
		
		counter -= 2;
	}

	std::cout << max1 << " " << max2;
	return 0;
}