//#include <iostream>
//
//int counterDigits(long num)
//{
//	int counter = 0;
//	while (num != 0)
//	{
//		num /= 10;
//		counter++;
//	}
//	return counter;
//}
//
//void swap(long& a, long& b)
//{
//	long temp = a;
//	a = b;
//	b = temp;
//}
//
//int checkNum(long N, unsigned int m, unsigned int l)
//{
//	if (N < 0 || N >= 109)
//		return - 1;
//
//	int size = counterDigits(N);
//	if (size < m || size < l)
//		return -1;
//
//	long* arr = new long[size];
//
//	for (int i = size - 1; i >= 0; i--)
//	{
//		int del = N / 10;
//		int digit = N - del * 10;
//		arr[i] = digit;
//	}
//
//	swap(arr[m - 1], arr[l - 1]);
//
//	int number = 0;
//	for (int i = 0;i<size;i++)
//	{
//		number = number * 10 + arr[i];
//	}
//
//	int del = number / 4;
//	int ost = number - del * 4;
//	if (ost == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	long N = 44;
//	unsigned int m = 1;
//	unsigned int l = 2;
//	std::cout << checkNum(N, m, l);
//	return 0;
//}