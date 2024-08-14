#include <iostream>

int main()
{
	char str[6] = "start";
	int n;
	std::cin >> n;

	str[0] = n;
	std::cout << str[0] << " ";
	for (int i = 1; i < 5; i++)
	{
		str[i] = str[i - 1] + i;
		std::cout << str[i] << " ";
	}
	return 0;
}