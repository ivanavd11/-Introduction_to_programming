#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	switch (n)
	{
	case 0: std::cout << " "; break;
	case 1: std::cout << "I"; break;
	case 2: std::cout << "II"; break;
	case 3: std::cout << "III"; break;
	case 4: std::cout << "IV"; break;
	case 5: std::cout << "V"; break;
	case 6: std::cout << "VI"; break;
	case 7: std::cout << "VII"; break;
	case 8: std::cout << "VIII"; break;
	case 9: std::cout << "IX"; break;
	default:std::cout << "Invalid input"; break;
	}
	return 0;
}