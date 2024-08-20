#include <iostream>

constexpr int SIZE = 1000;

void input(char str[], int size)
{
	for (int i = 0; i<size; i++)
	{
		std::cin >> str[i];
	}
}

int convertToDecimal(const char arr[], int size, int base) {
	int decimalValue = 0;
	int power = 1;  // Започваме от най-ниската степен на основата

	for (int i = size - 1; i >= 0; --i) {
		int digit;
		if (arr[i] >= '0' && arr[i] <= '9') {
			digit = arr[i] - '0';  // Ако е цифра (0-9)
		}
		else if (arr[i] >= 'A' && arr[i] <= 'F') {
			digit = arr[i] - 'A' + 10;  // Ако е буква (A-F) за 16-ична система
		}
		else
		{
			return -1;
		}

		decimalValue += digit * power;
		power *= base;  // Увеличаваме степента на основата
	}

	return decimalValue;
}

bool isEqual(char str1[], int size1, int k, char str2[], int size2, int n)
{
	int number1 = convertToDecimal(str1, size1, k);
	int number2 = convertToDecimal(str2, size2, n);

	if (number1 == number2)
	{
		return true;
	}
	return false;
}

int main()
{
	int size1, size2, k, n;
	std::cin >> size1;
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	input(str1, size1);
	std::cin >> k >> size2;
	input(str2, size2);
	std::cin >> n;

	if (isEqual(str1, size1, k, str2, size2, n))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}