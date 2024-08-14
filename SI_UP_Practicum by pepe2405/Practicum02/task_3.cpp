#include <iostream>

void daysInMount(int n)
{
	switch (n)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: std::cout << "31\n"; return;
	case 2: std::cout << "28/29\n"; return;
	case 4:
	case 6:
	case 9:
	case 11: std::cout << "30\n"; return;
	default:
		break;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	daysInMount(n);
	return 0;
}