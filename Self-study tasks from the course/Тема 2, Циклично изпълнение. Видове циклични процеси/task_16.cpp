#include <iostream>

int main()
{
	int n = 0;
	char op = ' ';
	std::cin >> n >> op;
	double sum = n;
	while (op != '=')
	{
		if (op == '+')
		{
			std::cin >> n >> op;
			sum = sum + n;
			
		}
		else if (op == '-')
		{
			std::cin >> n >> op;
			sum = sum - n;
			
		}
		else if (op == '*')
		{
			std::cin >> n >> op;
			sum = sum * n;
			
		}
		else if (op == '/')
		{
			std::cin >> n >> op;
			sum = sum / n;
			
		}
	}
	std::cout << sum;
	return 0;
}