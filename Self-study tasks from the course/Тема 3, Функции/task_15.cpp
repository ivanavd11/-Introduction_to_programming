#include <iostream>

bool isTriangle(int a, int b, int c)
{
	if (a + b > c && b + c > a && a + c > b && a - b < c && b - c < a && c - a < b && a>0 && b>0 && c>0)
	{
		return true;
	}
	return false;
}

int get_number() {
	int tmp;
	std::cin >> tmp;
	return tmp;
}

int main() {
    int a, b, c, n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        a = get_number();
        b = get_number();
        c = get_number();
        if (isTriangle(a, b, c)) {
            std::cout << a << ' ' << b << ' ' << c << '\n';
        }
    }
    return 0;
}