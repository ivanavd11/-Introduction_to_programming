#include <iostream>

int square(int x) 
{
	return x * x;
}

double sqrt(double num) {
	double x = num;
	double y = 1.0;
	double e = 0.01; // желана точност

	while (x - y > e) {
		x = (x + y) / 2;
		y = num / x;
	}
	return x;
}

double calculateDistance(int x1, int y1, int x2, int y2) {
	return sqrt(square(x2 - x1) + square(y2 - y1));
}

double calculatePerimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
	double sideA = calculateDistance(x1, y1, x2, y2);
	double sideB = calculateDistance(x2, y2, x3, y3);
	double sideC = calculateDistance(x3, y3, x1, y1);

	return sideA + sideB + sideC;
}

int main()
{
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;
	 
	std::cout << calculatePerimeter(a, b, c, d, e, f);
	return 0;
}