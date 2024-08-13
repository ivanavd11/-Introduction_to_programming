#include <iostream>

bool isSimetricc(char* str, int n)
{
	if (!str)
	{
		return true;
	}
	int right = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[right])
		{
			return false;
		}
		right--;
	}
	return true;
}

int main()
{
	int n = 0;
	std::cin >> n;

	char* str = new char[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	std::cout << isSimetricc(str, n);

	delete[] str;
	return 0;
}