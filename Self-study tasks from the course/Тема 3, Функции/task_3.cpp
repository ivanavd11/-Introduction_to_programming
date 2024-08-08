#include <iostream>

int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}

}

int main()
{
	int a, b = 0;
	std::cin >> a >> b;
	std::cout << min(a, b);
	return 0;
}