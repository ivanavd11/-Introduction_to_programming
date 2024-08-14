#include <iostream>

void func()
{
	int sum = 0;
	int number = 0;
	while (true)
	{
		std::cin >> number;
		if (number == sum)
		{
			return;
		}
		sum += number;
	}
}
int main()
{
	func();
	return 0;
}