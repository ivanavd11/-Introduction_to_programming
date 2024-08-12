#include <iostream>

int max(int* ptr1, int* ptr2)
{
	if (ptr1 > ptr2)
	{
		return *ptr1;
	}
	else
	{
		return *ptr2;
	}
}

int main()
{
	int a = 5;
	int b = 10;
	int* ptrA = &a;
	int* ptrB = &b;
	std::cout << max(ptrA, ptrB);
	return 0;
}