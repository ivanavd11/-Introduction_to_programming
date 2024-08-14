#include <iostream>

bool isValidDay(int n)
{
	return (n >= 1 && n <= 7);
}
int main()
{
	int n, m;
	std::cin >> n >> m;
	if (isValidDay(n))
	{
		switch (n+m)
		{
		case 1: std::cout << "Monday\n"; break;
		case 2: std::cout << "Tuesday\n"; break;
		case 3: std::cout << "Wednesday\n"; break;
		case 4: std::cout << "Thursday\n"; break;
		case 5: std::cout << "Friday\n"; break;
		case 6: std::cout << "Saturday\n"; break;
		case 7: std::cout << "Sunday\n"; break;
		default:
			break;
		}
	}
	else
	{
		std::cout << "Invalid day of the week";
	}
	return 0;
}