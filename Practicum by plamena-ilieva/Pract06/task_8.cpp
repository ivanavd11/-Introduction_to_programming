#include <iostream>

constexpr int SIZE = 1000;

void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isPermitation(int arr1[], int arr2[], int size)
{
	bool result = false;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				result = true;
				break;
			}
			else if (j == size - 1)
			{
				return false;
			}
		}
		if (i == size - 1)
		{
			return result;
		}
		result = false;

	}
	return result;
}


int main()
{
	int size;
	std::cin >> size;
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	input(arr1, size);
	input(arr2, size);
	if (isPermitation(arr1, arr2, size))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}