#include <iostream>

int counterOfDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
    return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int count = counterOfDigit(n);
	
    int remainder = 1;
    for (int i = 1; i < count; i++) {
        remainder *= 10;
    }

    n %= remainder;
    remainder /= 10;
    count--;

    for (int i = 0; i < count; i += 2) {
        int digit = n / remainder;
        std::cout << ' ' << digit;
        remainder /= 10; 

        if (remainder > 0)
        {
            n %=remainder; 
        }
        remainder /= 10; 
    }
    std::cout << '\n';

	return 0;
}