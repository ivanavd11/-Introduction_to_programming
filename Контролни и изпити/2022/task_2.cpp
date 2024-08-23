//#include <iostream>
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void sort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int minIndex = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[minIndex] > arr[j])
//			{
//				minIndex = j;
//			}
//		}
//		if (minIndex != i)
//		{
//			swap(arr[minIndex], arr[i]);
//		}
//	 }
//}
//
//void squareArr(int* arr, size_t len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = arr[i] * arr[i];
//	}
//	sort(arr, len);
//}
//
//int main()
//{
//	int arr[] = { -8, -3, 0, 1, 6, 8 };
//	int len = 6;
//	squareArr(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		std::cout<< arr[i] << " ";
//	}
//	return 0;
//}