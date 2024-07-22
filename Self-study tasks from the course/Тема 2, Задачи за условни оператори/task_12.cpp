#include <iostream>

int main()
{
	char ch1, ch2, ch3, ch4, ch5 = '0';
	std::cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
	if (ch1 < 'A' || ch1>'Z' || ch2 < 'A' || ch2>'Z' ||
		ch3 < 'a' || ch3>'z' || ch4 < 'a' || ch4>'z')
	{
		std::cout << "Invalid input";
		return -1;
	}
	else
	{
		if (ch5 <= ch2 || ch5 <= ch4)
		{
			std::cout << "true, ";
		}
		else
		{
			std::cout << "false";
		}

		if ( ch5 <= ch2 || ch5 <= ch4)
		{
			std::cout << "true, ";
		}
		else
		{
			std::cout << "false, ";
		}

		if (ch5 >= ch1 && ch5 <= ch2 && ch5 < ch3 && ch5 > ch4)
		{
			std::cout << "true, ";
		}
		else
		{
			std::cout << "false, ";
		}

		if ((ch5 >= ch1 && ch5 <= ch2) && (ch5 >= ch3 && ch5 <= ch4))
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "false";
		}

	}

	return 0;
}