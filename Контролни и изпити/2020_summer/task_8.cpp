#include <iostream>

double mySin(double x, long n)
{
    double term = x; 
    double sum = term; 

    for (long i = 1; i < n; ++i) 
    {
        term *= -x * x / (2 * i * (2 * i + 1));
        sum += term;
    }

    return sum;
}


int main()
{
    double x = 3.14159 / 2; // ?/2
    long n = 10;
    std::cout << mySin(x, n);
	return 0;
}