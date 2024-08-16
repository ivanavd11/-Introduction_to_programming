#include <iostream>
using namespace std;

void printPyramid(int n) 
{
    // Отпечатване на горната част на пирамидата
    for (int i = 1; i <= n; ++i) {
        // Отпечатване на интервалите
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Отпечатване на числата в реда
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }

    // Отпечатване на долната част на пирамидата
    for (int i = n - 1; i >= 1; --i) {
        // Отпечатване на интервалите
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Отпечатване на числата в реда
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
	unsigned int n;
	std::cin >> n;
    printPyramid(n);

	return 0;
}