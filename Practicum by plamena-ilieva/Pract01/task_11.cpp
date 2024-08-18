#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n / 10 <10)
	{
		std::cout << n ;
	}
	else
	{
		std::cout << n%10;
	}
	return 0;
}