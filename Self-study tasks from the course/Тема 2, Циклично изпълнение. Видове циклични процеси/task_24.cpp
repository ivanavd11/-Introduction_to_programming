#include <iostream>

int counter(int n)
{
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int sumOfDigit(int n)
{
	int sum = 0;
	int size = counter(n);
	int digit = 0;
	for (int i = 0; i < size; i++)
	{
		digit = n % 10;
		n /= 10;
		if (i == 0 || i == size - 1)
		{
			sum = sum + digit;
		}
	}
	return sum;
}

void swap(int i, int j)
{
	int temp = i;
	i = j;
	j = temp;
}

int reverse(int n)
{
	int size = counter(n);
	int newNumber = 0;
	int digit = 0;
	for (int i = 0; i < size; i++)
	{
		int ten = 1;
		digit = n % 10;
		n /= 10;
		for (int j = i; j < size-1; j++)
		{
			ten *= 10;
		}
		newNumber += digit * ten;
	}
	return newNumber;
}

int reverseFirstAndLast(int n)
{
	int ten = 1;
	int size = counter(n);
	for (int j = 0; j < size - 1; j++)
	{
		ten *= 10;
	}

	int first_digit = n;
	for (int i = 0; i < size-1; i++) {
		first_digit /= 10;
	}

	int last_digit = n % 10;
	int swapped_digits = last_digit;

	swapped_digits *= ten;
	swapped_digits += n % ten - last_digit + first_digit;

	return swapped_digits;
}

int product(int n)
{
	int mult = 1;
	int size = counter(n);
	for (int i = 0; i < size; i++)
	{
		int digit = n % 10;
		n /= 10;
		mult *= digit;
	}
	return mult;
}

bool isPalindrome(int n)
{
	int size = counter(n);

	int reverseNumber = reverse(n);
	if (n == reverseNumber)
	{
		return true;
	}
	return false;

}

int main()
{
	int n = 0;
	std::cin >> n;
	if (n < 10)
	{
		std::cout << "Invalid input";
		return -1;
	}
	std::cout << counter(n) << '\n';
	std::cout << sumOfDigit(n) << '\n';
	std::cout << reverseFirstAndLast(n) << '\n';
	std::cout << product(n) << '\n';
	std::cout << reverse(n) << '\n';
	if (isPalindrome(n))
	{
		std::cout << "Is a palindrome.\n";
	}
	else
	{
		std::cout << "Not a palindrome.\n";
	}

	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,
		seven = 0, eight = 0, nine = 0;

	int size = counter(n);
	for (int i = 0; i < size; i++) 
	{
		int last_digit = n % 10;
		switch (last_digit) 
		{
		case 0:
			zero++;
			break;
		case 1:
			one++;
			break;
		case 2:
			two++;
			break;
		case 3:
			three++;
			break;
		case 4:
			four++;
			break;
		case 5:
			five++;
			break;
		case 6:
			six++;
			break;
		case 7:
			seven++;
			break;
		case 8:
			eight++;
			break;
		case 9:
			nine++;
			break;
		}
		n /= 10;
	}

	if (zero > 0) {
		std::cout << "0 - " << zero << "\n";
	}
	if (one > 0) {
		std::cout << "1 - " << one << "\n";
	}
	if (two > 0) {
		std::cout << "2 - " << two << "\n";
	}
	if (three > 0) {
		std::cout << "3 - " << three << "\n";
	}
	if (four > 0) {
		std::cout << "4 - " << four << "\n";
	}
	if (five > 0) {
		std::cout << "5 - " << five << "\n";
	}
	if (six > 0) {
		std::cout << "6 - " << six << "\n";
	}
	if (seven > 0) {
		std::cout << "7 - " << seven << "\n";
	}
	if (eight > 0) {
		std::cout << "8 - " << eight << "\n";
	}
	if (nine > 0) {
		std::cout << "9 - " << nine << "\n";
	}


	return 0;
}