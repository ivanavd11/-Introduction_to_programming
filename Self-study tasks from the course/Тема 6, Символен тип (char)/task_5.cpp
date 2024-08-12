#include <iostream>

bool isValid(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int returnToInt(char ch1, char ch2)
{
	
	int num1 = ch1 - '0'; 
	int num2 = ch2 - '0'; 
	
	int product = num1 * num2;
	return product;
}
int main()
{
	char ch1, ch2;
	std::cin >> ch1 >> ch2;
	if (isValid(ch1) && isValid(ch2))
	{
		std::cout << returnToInt(ch1, ch2);
	}
	else
	{
		std::cout << "Invalid input\n";
	}
	return 0;
}