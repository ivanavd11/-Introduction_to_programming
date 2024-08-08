#include <iostream>

constexpr int MAX_SIZE = 12;

int counterOfDigit(int n)
{
	int counter = 0;
	while (n != 0)
	{
		counter++;
		n = n / 10;
	}
	return counter;
}
void inputArray(int* arr, int n, int size)
{
	for (int i = size-1; i >=0; i--)
	{
		arr[i] = n %10;
		n /= 10;
	}
}

bool isPalindrom(int* arr, int size)
{
	int len = size - 1;
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[len])
		{
			return false;
		}
		len--;
	}

	return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int arr[MAX_SIZE] = {};
	int size = counterOfDigit(n);
	inputArray(arr, n, size);

	std::cout << isPalindrom(arr, size);
	return 0;
}