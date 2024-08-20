#include <iostream>

void printSubset(const int arr[], size_t size, unsigned mask)
{
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		if (mask % 2 != 0)
			std::cout << arr[i] << " ";
		mask /= 2;
	}
	std::cout << "} " << std::endl;

}

void generateSubsets(const int arr[], size_t size)
{
	unsigned pt = 1 << size;
	for (unsigned i = 0; i < pt; i++)
		printSubset(arr, size, i);
}

int main()
{
	int size = 3;
	int arr[] = { 1,2,3 };
	generateSubsets(arr, size);
}