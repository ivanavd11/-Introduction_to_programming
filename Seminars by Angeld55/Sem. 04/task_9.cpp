#include <iostream>

int counterOfDigit(int n)
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
void sortArray(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
}

int sortedNumber(int n)
{
	int count = counterOfDigit(n);
	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}

	sortArray(arr, count);
	int number = 0;
	for (int i = 0; i < count; i++)
	{
		number = number * 10 + arr[i];
	}
	delete[]arr;
	return number;

}

int main()
{
	int n;
	std::cin >> n;
	std::cout << sortedNumber(n);
	return 0;
}