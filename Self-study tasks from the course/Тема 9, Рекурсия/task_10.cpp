#include <iostream>

bool isInNumber(int n, int k)
{
	if (n < k)
	{
		return false;
	}
	if (n%10 == k)
	{
		return true;
	}

	return isInNumber(n/10, k);

}

int main()
{
	int n = 12345;
	int k = 6;
	std::cout << isInNumber(n, k);
	return 0;
}