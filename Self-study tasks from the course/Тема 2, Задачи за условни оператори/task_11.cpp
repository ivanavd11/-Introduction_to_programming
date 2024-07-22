#include <iostream>

int main()
{
	int a, b, c, d, e = 0;
	std::cin >> a >> b >> c >> d >> e;
	if (e <= b || e <= d) {
		std::cout << "true, ";
	}
	else
	{
		std::cout << "false";
	}

	if ( e <= b &&  e <= d) {
		std::cout << "true, ";
	}
	else
	{
		std::cout << "false, ";
	}

	if (e <= b && e > d) {
		std::cout << "true, ";
	}
	else
	{
		std::cout << "false, ";
	}

	if (e <= b || e <= d) {
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}