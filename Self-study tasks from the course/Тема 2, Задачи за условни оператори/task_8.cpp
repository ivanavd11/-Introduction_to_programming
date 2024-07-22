#include <iostream>

int maxNumber(int a, int b, int c)
{ 
	int num = 0;
	if (a >= b && a >= c)
	{
		num = a * 100;
		if (b >= c)
		{
			num =num + b * 10 + c;
		}
		else
		{
			num = num + c * 10 + b;
		}
		return num;
	}
	else if (b >= a && b >= c)
	{
		num = b * 100;
		if (a >= c)
		{
			num = num + a * 10 + c;
		}
		else
		{
			num = num + c * 10 + a;
		}
		return num;
	}
	return c * 100 + b * 10 + a;
}

int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	std::cout << maxNumber(a, b, c);
	return 0;
}