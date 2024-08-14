#include <iostream>

constexpr int size = 5;

bool isLineal(int arr1[], int arr2[])
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr1[i] / arr1[i + 1] != arr2[i] / arr2[i + 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr1[size] = {1,2,3,5,5};
	int arr2[size] = {2,4,6,8,10};
	if (isLineal(arr1, arr2))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}
	return 0;
}