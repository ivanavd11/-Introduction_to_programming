#include <iostream>

int stepen(int n, int m)
{
	if (m == 0)
	{
		return 1;
	}
	if (m > 0)
	{
		return n * stepen(n, m - 1);
	}
	else if(m<0)
	{
		return n*1 / stepen(n, m + 1);
	}
}

int main()
{
	int n, m = 0;
	std::cin >> n >> m;
	std::cout << stepen(n, m);
	return 0;
}