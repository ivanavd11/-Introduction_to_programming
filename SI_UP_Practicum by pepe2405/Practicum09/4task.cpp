#include <iostream>
using namespace std;

// Функция за проверка дали 8-битово число е палиндром
bool isBitPalindrome(unsigned short n) {
    unsigned short reversed = 0;
    unsigned short original = n;

    // Размяна на битовете на `n` чрез побитови операции
    for (int i = 0; i < 8; ++i) {
        if(n==0)
        {
            break;
        }
        reversed <<= 1;           // Преместване на reversed наляво
        reversed |= (n & 1);      // Добавяне на най-младшия бит на `n` към reversed
        n >>=1;                  // Преместване на `n` надясно
    }

    // Проверка дали обръщането е равно на оригиналното число
    return (reversed == original);
}

int main() {
    unsigned short n;
    cin >> n;

    if (isBitPalindrome(n)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}