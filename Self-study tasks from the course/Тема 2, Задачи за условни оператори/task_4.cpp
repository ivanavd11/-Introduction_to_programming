#include <iostream>

void sort(int a, int b, int c)
{
    if (a < b) {
        if (a < c) {
            std::cout << a << ' ';
            if (b < c) {
                std::cout << b << ' ' << c << '\n';
            }
            else {
                std::cout << c << ' ' << b << '\n';
            }
        }
        else {
            std::cout << c << ' ' << a << ' ' << b << '\n';
        }
    }
    else {
        if (b < c) {
            std::cout << b << ' ';
            if (a < c) {
                std::cout << a << ' ' << c << '\n';
            }
            else {
                std::cout << c << ' ' << a << '\n';
            }
        }
        else {
            std::cout << c << ' ' << b << ' ' << a << '\n';
        }
    }
    
}
int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	sort(a, b, c);
	return 0;
}