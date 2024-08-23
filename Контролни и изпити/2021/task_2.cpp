#include <iostream>

int counterOfDigits(int n)
{
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return counter;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int* convertNum(long num, int k, int m)
{
	int size = counterOfDigits(num);
	if (k > size || m > size)
		return nullptr;

	int* arr = new int[size];

	for (int i = size-1; i>=0; i--)
	{
		arr[i] = num % 10;
		num /= 10;
	}

	swap(arr[k - 1], arr[m - 1]);

	return arr;
}

int main()
{
	long num = 437263;
	int k = 4;
	int m = 1;
	int* arr = convertNum(num, k, m);
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}