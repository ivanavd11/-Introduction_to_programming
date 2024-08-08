#include <iostream>

bool hasNoAdjacentBits(int n) {
    // Проверяваме всеки бит и неговия съсед
    while (n > 0) {
        // Извличаме текущия бит и следващия бит
        int currentBit = n & 1;
        int nextBit = (n >> 1) & 1;

        // Ако текущия и следващия бит са еднакви, връщаме false
        if (currentBit == nextBit) {
            return false;
        }

        // Преместваме се с един бит надясно
        n = n >> 1;
    }

    // Ако не намерим съседни еднакви битове, връщаме true
    return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (hasNoAdjacentBits(n))
	{
		std::cout << "True";
	}
	else
	{
		std::cout << "False";
	}
	return 0;
}