#include <iostream>

double average(const int N)
{
	int counter = 0;
	double ave = 0;
	double number = 0;
	while (counter != N)
	{
		std::cin >> number;
		counter++;
		ave += number;
	}

	return ave / N;
}

int main()
{
	int N = 0;
	std::cin >> N;
	std::cout << average(N);
	return 0;
}