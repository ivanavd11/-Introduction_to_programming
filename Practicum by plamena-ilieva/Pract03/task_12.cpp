#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
    // Горна част на папионката
    for (int i = 1; i <= n; ++i) {
        // Първата част: числата от 1 до i
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // Празните места в средата
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; ++j) {
            std::cout << "  ";
        }

        // Втората част: числата от i до 1
        for (int j = i; j >= 1; --j) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    // Долна част на папионката
    for (int i = n - 1; i >= 1; --i) {
        // Първата част: числата от 1 до i
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // Празните места в средата
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; ++j) {
            std::cout << "  ";
        }

        // Втората част: числата от i до 1
        for (int j = i; j >= 1; --j) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
	return 0;
}