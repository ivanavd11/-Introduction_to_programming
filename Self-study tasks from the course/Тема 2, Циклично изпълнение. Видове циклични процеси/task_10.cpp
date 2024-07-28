#include <iostream>

int main()
{
	int n , t1 = 0, t2 = 1, nextTerm = 0;
	std::cin >> n;
	for (int i = 1; i < n; i++)
	{
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
	}

	std::cout << nextTerm;
	return 0;
}