#include <iostream>

int findMax(int* arr, int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	int n = 0;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int max = findMax(arr, n);
	std::cout << max<<" "<< &max;

}