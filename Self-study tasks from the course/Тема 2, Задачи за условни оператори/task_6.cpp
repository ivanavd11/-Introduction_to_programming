#include <iostream>

void valid(double a)
{
    int b = a;
    double diff = (a > b) ? a - b : b - a;

    if (diff < 0.0000001) {
        if (b % 2 == 1) {
            std::cout << "Odd integer\n";
        }
        else {
            std::cout << "Even integer\n";
        }
    }
    else {
        if (a > 0) {
            std::cout << "Positive ";
        }
        else {
            std::cout << "Negative ";
        }
        std::cout << " rational\n";
    }
}

int main()
{
	double a =0 ;
	std::cin >> a;
    valid(a);
	return 0;
}