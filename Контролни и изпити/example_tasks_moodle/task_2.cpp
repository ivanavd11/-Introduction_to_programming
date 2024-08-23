#include <iostream>

void hourAndMin(int number)
{
	if (number < 0 || number>86000)
		return;

	int sec = number;
	int hour = sec / 3600;
	int min = (sec % 3600) / 60;

	if (hour < 10)
	{
		std::cout << "0" << hour << ":";
	}
	else
	{
		std::cout << hour << ":";
	}

	if (min < 10)
	{
		std::cout << "0" << min;
	}
	else
	{
		std::cout << min;
	}
}

int main()
{
	int number = 7200;
	hourAndMin(number);
	return 0;
}