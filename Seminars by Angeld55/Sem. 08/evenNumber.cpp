#include <iostream>

bool isEven(int n)
{
	if (n & 1)
	{
		return false;
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (isEven(n))
	{
		std::cout << "even";
	}
	else
	{
		std::cout << "odd";
	}
	return 0; 
	
}