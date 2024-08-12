#include <iostream>

int main()
{
	char ch1,ch2,ch3;
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		std::cin >> ch1 >> ch2 >> ch3;
		int num = (ch1 - '0') * 100 +
					(ch2 - '0') * 10 +
					(ch3 - '0');
		sum += num;
		
	}
	std::cout<<sum;
	return 0;
}