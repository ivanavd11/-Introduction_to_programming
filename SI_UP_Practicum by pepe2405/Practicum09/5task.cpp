#include <iostream>
using namespace std;
int main()
{
    int number;
    int result = 0;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        // ��������� �� XOR ��������
        result = result ^ number;
    }

    cout << result << endl;

    return 0;
}