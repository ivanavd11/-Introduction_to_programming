#include <iostream>

bool isValid(int a, int b)
{
	return (a >= 0 && a <= 256 &&
		    b>=0 && b<=256 && a<=b);
}

void printCharSymbol(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		char ch = i;
		std::cout << i << " --> " << ch << '\n';
	}
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	if (isValid(a, b))
	{
		printCharSymbol(a, b);
	}
	else
	{
		std::cout << "Invalid codes!";
	}
	return 0;
}