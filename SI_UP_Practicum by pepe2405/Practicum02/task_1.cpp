#include <iostream>

bool isValid(int n)
{
	return (n >= 1 && n <= 7);
}

void whichDayIs(int n)
{
	switch (n)
	{
	case 1: std::cout << "Monday\n"; return;
	case 2: std::cout << "Tuesday\n"; return;
	case 3: std::cout << "Wednesday\n"; return;
	case 4: std::cout << "Thursday\n"; return;
	case 5: std::cout << "Friday\n"; return;
	case 6: std::cout << "Saturday\n"; return;
	case 7: std::cout << "Sunday\n"; return;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (isValid(n))
	{
		whichDayIs(n);
	}
	else
	{
		std::cout << "Not a day of the week";
	}
	return 0;
}