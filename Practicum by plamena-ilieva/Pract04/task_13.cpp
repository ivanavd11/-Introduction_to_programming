#include <iostream>

int sumOfDigits(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int reduceToSingleDigit(long long num) {
	while (num >= 10) { // Докато числото не стане едноцифрено
		num = sumOfDigits(num);
	}
	return num;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << reduceToSingleDigit(n);
	return 0;
}