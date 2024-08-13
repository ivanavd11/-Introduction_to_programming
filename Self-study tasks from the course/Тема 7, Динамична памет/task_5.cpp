#include <iostream>

int main()
{
	int N = 0;
	std::cin >> N;

    int original = N;
    int reversed = 0;

   //  Обръщаме числото
    while (N > 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }

    // Проверяваме дали оригиналното число и обърнатото са еднакви
    if (original == reversed) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
	return 0;
}