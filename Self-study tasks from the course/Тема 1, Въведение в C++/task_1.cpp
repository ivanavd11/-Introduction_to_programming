#include <iostream>

double areaOfRectangle(int a, int b)
{
	if (a <= 0 || b <= 0) return 0;
	else return a * b;
}

double perimeterOfRectangle(int a, int b)
{
	if (a <= 0 || b <= 0) return 0;
	else return 2 * (a + b);
}

double areaOfRight_angledTriangle(int a, int b)
{
	if (a <= 0 || b <= 0) return 0;
	else return (a * b) / 2;
}

double perimeterOfRight_angledTriangle(int a, int b)
{
	if (a <= 0 || b <= 0) return 0;
	else
	{
		double c = sqrt(a * a + b * b);
		return a + b + c;
	}
}

double areaOfTrapezium(double a, double b, double h)
{
	if (a <= 0 || b <= 0 || h <= 0) return 0;
	else return ((a + b) * h) / 2;
}

double  perimeterOfTrapezium(double a, double b, double h)
{
	if (a <= 0 || b <= 0 || h<=0) return 0;
	else
	{
		double newSide = (a - b) / 2;
		double c = sqrt(newSide * newSide + h * h);
		return a + b + 2 * c;
	}
}

int main()
{
	double a, b, h = 0;
	{
		std::cout << "Rectangle\n";
		std::cin >> a >> b;
		std::cout << "Area = " << areaOfRectangle(a, b) << ", Perimeter = " << perimeterOfRectangle(a, b);
		std::cout << "\n"; 
	}
	{
		std::cout << "Right-angled triangle\n";
		std::cin >> a >> b;
		std::cout << "Area = " << areaOfRight_angledTriangle(a, b) << ", Perimeter = " << perimeterOfRight_angledTriangle(a, b);
		std::cout << "\n";
	}
	{
		std::cout << "Trapezium\n";
		std::cin >> a >> b>>h;
		std::cout << "Area = " << areaOfTrapezium(a, b, h) << ", Perimeter = " << perimeterOfTrapezium(a, b,h);
		std::cout << "\n";
	}

	return 0;
}