#include <iostream>

constexpr int SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isInArray(int arr1[], int size1, int arr2[], int size2)
{
	int len = 0;
	for (int i = 0; i < size1-1; i++)
	{
		while (arr1[i] == arr2[len])
		{
			len++;
			if (len == size2)
			{
				return true;
			}
			else if (arr1[i + 1] != arr2[len])
			{
				break;
			}
			i++;
		}
		len = 0;
		
	}
	return false;
}

int main()
{
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	int size1, size2 = 0;
	std::cin >> size1;
	input(arr1, size1);
	std::cin >> size2;
	input(arr2, size2);
	if (isInArray(arr1, size1, arr2, size2))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}