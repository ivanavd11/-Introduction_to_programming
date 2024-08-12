#include <iostream>

void change(int* &ptr)
{
	ptr = nullptr;
}
int main()
{
	int x = 5;
	int* ptr = &x;
	change(ptr);
	if (ptr == nullptr) {
		std::cout << "ptr is now nullptr." << std::endl;
	}
	else {
		std::cout << "ptr still points to: " << *ptr << std::endl;
	}
	return 0;
}