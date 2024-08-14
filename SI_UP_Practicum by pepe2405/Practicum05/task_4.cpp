#include <iostream>

constexpr int SIZE = 10;

void outputNewArray(int arr[], int n)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % n == 0)
		{
			arr[i]=0;
			
		}
		std::cout << arr[i] << " ";
	}

}
int main()
{
	int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int n = 0;
	std::cin >> n;
	outputNewArray(arr, n);

	return 0;
}