#include <iostream>

constexpr int SIZE = 1000;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isPalindrome(int arr[], int size)
{
	int lastIndex = size - 1;
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[lastIndex])
		{
			return false;
		}
		lastIndex--;
	}
	return true;
}

int main()
{
	int arr[SIZE] = {};
	int size;
	std::cin >> size;
	inputArray(arr, size);
	if (isPalindrome(arr, size))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}

	return 0;
}