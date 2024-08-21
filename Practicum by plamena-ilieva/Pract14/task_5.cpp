#include <iostream>

bool isPrimeHelper(int n, int divisor) 
{
    if (divisor == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrimeHelper(n, divisor - 1);
}

bool isPrime(int n)
{
    if (n <= 1) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    return isPrimeHelper(n, sqrt(n));
}

int main()
{
	int n = 12;
	std::cout << isPrime(n);

	return 0;
}