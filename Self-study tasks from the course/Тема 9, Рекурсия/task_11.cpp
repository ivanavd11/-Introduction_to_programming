#include <iostream>

bool isElementInSequence(int arr[], int n, int x) {
    if (n == 0)
        return false;  // Достигнато е началото на редицата без да се намери x
    if (arr[n - 1] == x)
        return true;  // Елементът е намерен
    return isElementInSequence(arr, n - 1, x);  // Продължаваме да търсим в по-късата редица
}

int main()
{
	int number = 3;
	int arr[] = { 1,2,3,4,9,6 };
	std::cout << isElementInSequence(arr, 6, number);
	return 0;
}