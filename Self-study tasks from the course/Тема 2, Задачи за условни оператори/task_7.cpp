#include <iostream>

bool isTriangle(int a, int b, int c)
{
	if (a<b + c && b<a + c && c<b + a && a>b - c && b>a - c && c>a - b) return true;
	else return false;
}


int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	if (isTriangle(a, b, c))
	{
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
	return 0;
}