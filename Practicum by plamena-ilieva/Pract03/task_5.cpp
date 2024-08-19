#include <iostream>

int main()
{
	int n;
	std::cin >> n;

    int a = 0, b = 1;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            std::cout << a;
        }
        else if (i == 1) {
            std::cout << " " << b;
        }
        else {
            int next = a + b;
            std::cout << " " << next;
            a = b;
            b = next;
        }
    }

	return 0;
}