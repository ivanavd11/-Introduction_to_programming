#include <iostream>

void splitNumberByPosition(int n, int& evenPosNum, int& oddPosNum) {
    evenPosNum = 0;  // Число от цифрите на четни позиции
    oddPosNum = 0;   // Число от цифрите на нечетни позиции

    int currentPos = 1;  // Започваме от първата позиция (най-дясната цифра)
    int evenMultiplier = 1;  // Мултипликатор за числото с четните позиции
    int oddMultiplier = 1;   // Мултипликатор за числото с нечетните позиции

    while (n > 0) {
        int digit = n % 10;  // Вземаме последната цифра
        if (currentPos % 2 == 0) {
            evenPosNum += digit * evenMultiplier;
            evenMultiplier *= 10;  // Увеличаваме мултипликатора за следващата цифра
        }
        else {
            oddPosNum += digit * oddMultiplier;
            oddMultiplier *= 10;  // Увеличаваме мултипликатора за следващата цифра
        }
        n /= 10;  // Премахваме последната цифра от числото
        currentPos++;
    }
}

int main()
{
	int n;
	std::cin >> n;

    int evenPosNum, oddPosNum;
    splitNumberByPosition(n, evenPosNum, oddPosNum);

    std::cout << evenPosNum << " " << oddPosNum;
	return 0;
}