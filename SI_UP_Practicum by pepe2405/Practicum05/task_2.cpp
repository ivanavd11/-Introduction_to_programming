#include <iostream>

void outputNewArray(int arr[],int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] + n << " ";
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int size = 5;
	int n;
	std::cin >> n;
	outputNewArray(arr, size, n);
	return 0;
}