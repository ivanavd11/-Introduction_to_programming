#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	bool isLower = (ch == 'a' || ch == 'e' || ch == 'i'
		|| ch == 'o' || ch == 'u' || ch == 'y');
	
	bool isUpper = (ch == 'A' || ch == 'E' || ch == 'I'
		|| ch == 'O' || ch == 'U' || ch == 'Y');

	bool isTrue = (isUpper || isLower);
	std::cout << isTrue;
	return 0;
}