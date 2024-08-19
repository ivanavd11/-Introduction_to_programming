#include <iostream>
#include <iomanip>  // за setw
int main()
{
	int n;
	std::cin >> n;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Печатаме най-горния ред отляво надясно
        for (int i = left; i <= right; i++) {
            std::cout << std::setw(3) << num++;  // използваме setw за подравняване
        }
        top++;
        std::cout << std::endl;

        // Печатаме най-дясната колона отгоре надолу
        for (int i = top; i <= bottom; i++) {
            std::cout << std::setw(3) << num++;
            if (i != bottom) std::cout << std::endl;
        }
        right--;
        std::cout << std::endl;

        // Печатаме най-долния ред отдясно наляво
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                std::cout << std::setw(3) << num++;
            }
            bottom--;
            std::cout << std::endl;
        }

        // Печатаме най-лявата колона отдолу нагоре
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                std::cout << std::setw(3) << num++;
                if (i != top) std::cout << std::endl;
            }
            left++;
            std::cout << std::endl;
        }
    }
	return 0;
}