#include <iostream>

void returnTOnullptr(int*& ptr)
{
	ptr = nullptr;
}
int main()
{
	int a = 5;
	int* ptrA = &a;
	returnTOnullptr(ptrA);
	std::cout << ptrA; 
	return 0;
}