#include <iostream>

bool isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int* countletters(int arr1[], int arr2[], int N)
{
	int* arr = new int[2];

	int counterUpper = 0;
	int counterLower = 0;
	for (int i = 0; i < N; i++)
	{
		int number = arr1[i] + arr2[i];
		char symbol = number + '\0';
		if (isUpper(symbol))
		{
			counterUpper++;
		}
		else if (isLower(symbol))
		{
			counterLower++;
		}
	}

	arr[0] = counterUpper;
	arr[1] = counterLower;

	return arr;
}

int main()
{
	int arr1[] = { 3, 5, 11, 2, 9 };
	int arr2[] = { 1, 4, 32, 71, 5 };
	int n = 5;
	int* result = countletters(arr1, arr2, n);

	for (int i = 0; i < 2; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}