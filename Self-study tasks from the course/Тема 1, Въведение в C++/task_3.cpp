#include <iostream>

const double PI = 3.14;

bool validate(double a)
{
	if (a <= 0) return false;
	else true;
}

double areaOfSquare(double a)
{
	return a * a;
}

double perimeterOfSquare(double a)
{
	return a*4;
}

double lengthOfCircle(double a)
{
	return 2 * a * PI;
}

double areaOfEquilateralTriangle(double a)
{
	double h = sqrt(a * a - (a / 2) * (a / 2));
	return a * h / 2;
}

double perimeterOfEquilateralTriangle(double a)
{
	return 3 * a;
}

int main()
{
	double a = 0;
	std::cin >> a;
	if (!validate(a)) return -1;
	else
	{
		std::cout << "Area of square = " << areaOfSquare(a);
		std::cout << "\nPerimeter of square = " << perimeterOfSquare(a);
		std::cout << "\nThe length of a circle = " << lengthOfCircle(a);
		std::cout << "Area of equilateral triangle = " << areaOfEquilateralTriangle(a);
		std::cout << "\nPerimeter of equilateral triangle = " << perimeterOfEquilateralTriangle(a);

	}
	return 0;
}