#include <iostream>

int main()
{
	int seconds;
	std::cin >> seconds;
	int days = seconds/(24*60*60);
	seconds = seconds % (24 * 60 * 60);
	int hour = seconds/(60*60);
	seconds = seconds % (60 * 60);
	int min = seconds / 60;
	seconds = seconds % 60;
	std::cout << days << " days, "
		<< hour << " hours, "
		<< min << " minutes and "
		<< seconds << " seconds";

	return 0;
}