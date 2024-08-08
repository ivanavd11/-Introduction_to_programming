#include <iostream>

int pow(const int num, const unsigned N)
{
	int result = 1;
	for (int i = 1; i <= N; i++)
	{
		result *= num;
	}
	return result;
}

int main()
{
	int num = 0;
	unsigned N = 0;
	std::cin >> num >> N;
	std::cout << pow(num, N);
	return 0;
}