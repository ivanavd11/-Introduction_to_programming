#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << ((a <= b) && (c <= d) && ((a<=c && c<=b) || (a<=d && d<=b)));
	return 0;
}