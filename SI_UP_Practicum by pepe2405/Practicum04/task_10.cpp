#include <iostream>

void isRowEvenOrOdd(int n)
{
	double a = 1;
	for (int i = 0; i < n; i++)
	{
		a = a * 3 / 2;
	}

	int newA = a;
	if (newA % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}

int main()
{
	int n;
	std::cin >> n;
	isRowEvenOrOdd(n);
	return 0;
}