#include <iostream>

long long LastElement(unsigned long long* arr, int size)
{
	int i = size - 1;
	return *(arr + i);
}
int main()
{
	const int size = 5;
	unsigned long long arr[size] = { 1,5,9,4,6 };
	std::cout << LastElement(arr, size);
	return 0;
}