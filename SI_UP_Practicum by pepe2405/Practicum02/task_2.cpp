#include <iostream>

void grade(int n)
{
	if (n >= 90)
	{
		std::cout << "Grade: 6+";
		return;
	}
	else if (n >= 80)
	{
		std::cout << "Grade: 6";
	}
	else if (n >= 70)
	{
		std::cout << "Grade: 5";
	}
	else if (n >= 60)
	{
		std::cout << "Grade: 4";
	}
	else if (n >= 40)
	{
		std::cout << "Grade: 3";
	}
	else
	{
		std::cout << "Grade: 2";
	}
}

int main()
{
	int n = 0;
	std::cout << "Result in %: ";
	std::cin >> n;
	grade(n);
	return 0;
}