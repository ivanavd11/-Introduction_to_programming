#include <iostream>

constexpr int SIZE = 100;

void input(char str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> str[i];
	}
}

void newString(char str[], int size, int k)
{
	int borrow = 1;  // Започваме с borrow = 1, защото изваждаме 1 от числото

	for (int i = size - 1; i >= 0; --i) {
		int digit = str[i] - '0';  // Преобразуваме символа в цифра
		int newValue = digit - borrow;

		if (newValue < 0) {
			str[i] = (k + newValue) + '0';  // Ако резултатът е отрицателен, заемаме от следващия разряд
			borrow = 1;  // Имаме заемане, затова borrow остава 1
		}
		else {
			str[i] = newValue + '0';  // Ако няма заемане, просто присвояваме резултата
			borrow = 0;  // Няма заемане, затова прекратяваме заемането
			break;  // Няма нужда да продължаваме, ако няма заемане
		}
	}

}

int main()
{
	int size;
	std::cin >> size;
	char str[SIZE] = "";
	input(str, size);
	int k;
	std::cin >> k;
	newString(str, size, k);
	std::cout << str;

	return 0;
}