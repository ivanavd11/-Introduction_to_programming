#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int result = 0;
	if (a > b && a > c)
	{
		result = a * 100;
		if (b > c)
		{
			result = result + b * 10 + c;
		}
		else
		{
			result = result + c * 10 + b;
		}
	}
	else if (b > a && b > c)
	{
		result = b * 100;
		if (a > c)
		{
			result = result + a * 10 + c;
		}
		else
		{
			result = result + c * 10 + a;
		}
	}
	else
	{
		result = c * 100;
		if (a > b)
		{
			result = result + a * 10 + b;
		}
		else
		{
			result = result + b * 10 + a;
		}
	}
	std::cout << result;
	return 0;
}