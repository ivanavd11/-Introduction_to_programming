#include <iostream>

void inputArray(int* array, int number)
{
	for (int i = 0; i < number; i++)
	{
		std::cin >> array[i];
	}
}

double average(int* array, int number)
{
	double sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += array[i];
	}
	return sum / number;
}

int main()
{
	int number = 0;
	std::cin >> number;
	int* array = new int[number];
	inputArray(array, number);
	std::cout << average(array, number);

	delete[] array;
	return 0;
}