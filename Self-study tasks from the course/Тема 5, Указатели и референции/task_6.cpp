#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = { 1,2,3,4,5 };
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
}