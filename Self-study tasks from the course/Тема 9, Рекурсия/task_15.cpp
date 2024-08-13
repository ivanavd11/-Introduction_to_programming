#include <iostream>

bool isDifferent(int arr[], int size)
{
	if (size <= 1)
	{
		return true;
	}

	int j = size - 2;
	for (; j >= 0; --j) {
		if (arr[j] == arr[size - 1]) {
			return false;
		}
	}

	--size;
	return isDifferent(arr, size);
}

int main()
{
	const int n = 5;
	int arr[n] = { 1,2,1,4,5 };
	std::cout << isDifferent(arr, n);
	return 0;
}