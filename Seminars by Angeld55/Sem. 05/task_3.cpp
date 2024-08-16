//#include <iostream>
//
//void returnMinMax(int n, int& min, int& max)
//{
//	int digit = 0;
//	min = n % 10;
//	n /= 10;
//	max = n % 10;
//	n /= 10;
//	if (min > max)
//	{
//		int temp = min;
//		min = max;
//		max = temp;
//	}
//	while (n != 0)
//	{
//		digit = n % 10;
//		if (digit > max && max>min)
//		{
//			max = digit;
//		}
//		else if (digit < min && min < max)
//		{
//			min = digit;
//		}
//		n /= 10;
//	}
//}
//
//
//int main()
//{
//	int number;
//	std::cin >> number;
//	int min, max = 0;
//	returnMinMax(number, min, max);
//	std::cout << min << " " << max;
//	return 0; 
//}