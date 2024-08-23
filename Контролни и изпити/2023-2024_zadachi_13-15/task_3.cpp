#include <iostream>

void swap(long& a, long& b)
{
	long temp = a;
	a = b;
	b = temp;
}

void sort(long arr[], size_t N)
{
	for (int i = 0; i < N - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < N; j++)
		{
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
}

char* findDiff(const long arr[], size_t N)
{
	long* result = new long[N];
	for (int i = 0; i < N; i++)
	{
		result[i] = arr[i];
	}

	sort(result, N);

	int current = 10000;
	int diff = 0;

	int first = 0;
	int second = 0;
	for (int i = 1; i < N; i++)
	{
		diff = result[i] - result[i - 1];
		if (diff < current)
		{
			current = diff;
			first = result[i];
			second = result[i - 1];
		}
	}

	delete[] result;

	int size = 3;
	if (first > 9)
	{
		size++;
	}
	if (second > 9)
	{
		size++;
	}

	char* str = new char[size + 1];
	int len = 0;
	if (first <= 9)
	{
		str[len++] = (first + '0');
	}
	else
	{
		str[len++] = (first / 10 + '0');
		str[len++] = (first % 10 + '0');
	}
	str[len++] = ',';

	if (second <= 9)
	{
		str[len++] = (second + '0');
	}
	else
	{
		str[len++] = (second / 10 + '0');
		str[len++] = (second % 10 + '0');
	}
	str[len] = '\0';

	return str;
}

int main()
{
	const long arr[] = {15,7,10,1,13};
	size_t N = 5;
	char* str = findDiff(arr, N);
	std::cout << str;
	delete[] str;
	return 0;
}