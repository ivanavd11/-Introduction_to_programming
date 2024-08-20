#include <iostream>

constexpr int SIZE = 1000;
bool isPalindrome(unsigned int n, int k)
{
	int len = 0;
	char str[SIZE] = "";
	while (n != 0)
	{
		int number = n % k;
		str[len++] = number + '0';
		n /= k;
	}
	str[len] = '\0';

	int last = len - 1;
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[last])
		{
			return false;
		}
		last--;
	}
	return true;
}


int main()
{
	unsigned int n;
	int k;
	std::cin >> n >> k;
	if (isPalindrome(n, k))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}