#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	bool isValid = (n >= 2 && n <= 6);
	std::cout << isValid;
	return 0;
}