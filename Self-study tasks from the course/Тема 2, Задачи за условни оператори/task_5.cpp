#include <iostream>

bool isEqual(int num)
{
	int a = num / 100;
	int b = (num / 10)%10;
	int c = num % 10;
	if (a == b || a == c || b == c) { return true; }
	else return false;
}
int main()
{
	int num = 0;
	std::cin >> num;
	if (isEqual(num))
	{
		std::cout << "True";
	}
	else
	std::cout << "False";

	return 0;
}