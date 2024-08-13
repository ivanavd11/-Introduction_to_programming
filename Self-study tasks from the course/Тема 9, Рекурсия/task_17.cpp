#include <iostream>

// Рекурсивна функция за преместване на дисковете
void moveDisks(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        std::cout << "Премести диск 1 от " << fromPeg << " към " << toPeg << std::endl;
        return;
    }

    // Преместване на n-1 диска от fromPeg към auxPeg, използвайки toPeg като помощен
    moveDisks(n - 1, fromPeg, auxPeg, toPeg);

    // Преместване на най-големия диск от fromPeg към toPeg
    std::cout << "Премести диск " << n << " от " << fromPeg << " към " << toPeg << std::endl;

    // Преместване на n-1 диска от auxPeg към toPeg, използвайки fromPeg като помощен
    moveDisks(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n;

    std::cout << "Въведете броя на дисковете: ";
    std::cin >> n;

    // Извикваме рекурсивната функция, за да преместим всички дискове от стълб 'A' към стълб 'C', използвайки стълб 'B' като помощен
    moveDisks(n, 'A', 'C', 'B');

    return 0;
}