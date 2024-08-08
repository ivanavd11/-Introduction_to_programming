#include <iostream>

constexpr int MAX_SIZE = 20;



void revertInArray(int n)
{
	bool arr[MAX_SIZE] = {};
	int len = 0;
	do {
		arr[len++] = n % 2;
		n /= 2;
	} while (n != 0);

	for (int i = len - 1; i >= 0; i--) {
		std::cout << arr[i];
	}
}



int main()
{
	int n = 0;
	std::cin >> n;
	revertInArray(n);


	return 0;
}