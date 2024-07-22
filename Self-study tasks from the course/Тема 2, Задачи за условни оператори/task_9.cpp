#include <iostream>

bool isValid(int a)
{
	if (a < 0 || a>100) return false;
	else return true;
}

void printNumber(int a)
{
	switch (a)
	{
	case 0: std::cout << "Zero"; break;
	case 1: std::cout << "One"; break;
	case 2: std::cout << "Two"; break;
	case 3: std::cout << "Three"; break;
	case 4: std::cout << "Four"; break;
	case 5: std::cout << "Five"; break;
	case 6: std::cout << "Six"; break;
	case 7: std::cout << "Seven"; break;
	case 8: std::cout << "Eight"; break;
	case 9: std::cout << "Nine"; break;

	case 10: std::cout << "Ten"; break;
	case 11: std::cout << "Eleven"; break;
	case 12: std::cout << "Twelve"; break;
	case 13: std::cout << "Thirteen"; break;
	case 14: std::cout << "Fourteen"; break;
	case 15: std::cout << "Fifteen"; break;
	case 16: std::cout << "Sixteen"; break;
	case 17: std::cout << "Seventeen"; break;
	case 18: std::cout << "Eighteen"; break;
	case 19: std::cout << "Nineteen"; break;
	
	case 20: std::cout << "Twenty "; break;
	case 21: std::cout << "Twenty one"; break;
	case 22: std::cout << "Twenty two"; break;
	case 23: std::cout << "Twenty three"; break;
	case 24: std::cout << "Twenty four"; break;
	case 25: std::cout << "Twenty five"; break;
	case 26: std::cout << "Twenty six"; break;
	case 27: std::cout << "Twenty seven"; break;
	case 28: std::cout << "Twenty eight"; break;
	case 29: std::cout << "Twenty nine"; break;

	case 30: std::cout << "Thirty "; break;
	case 31: std::cout << "Thirty one"; break;
	case 32: std::cout << "Thirty two"; break;
	case 33: std::cout << "Thirty three"; break;
	case 34: std::cout << "Thirty four"; break;
	case 35: std::cout << "Thirty five"; break;
	case 36: std::cout << "Thirty six"; break;
	case 37: std::cout << "Thirty seven"; break;
	case 38: std::cout << "Thirty eight"; break;
	case 39: std::cout << "Thirty nine"; break;

	case 40: std::cout << "Forty "; break;
	case 41: std::cout << "Forty one"; break;
	case 42: std::cout << "Forty two"; break;
	case 43: std::cout << "Forty three"; break;
	case 44: std::cout << "Forty four"; break;
	case 45: std::cout << "Forty five"; break;
	case 46: std::cout << "Forty six"; break;
	case 47: std::cout << "Forty seven"; break;
	case 48: std::cout << "Forty eight"; break;
	case 49: std::cout << "Forty nine"; break;

	case 50: std::cout << "Fifty "; break;
	case 51: std::cout << "Fifty one"; break;
	case 52: std::cout << "Fifty two"; break;
	case 53: std::cout << "Fifty three"; break;
	case 54: std::cout << "Fifty four"; break;
	case 55: std::cout << "Fifty five"; break;
	case 56: std::cout << "Fifty six"; break;
	case 57: std::cout << "Fifty seven"; break;
	case 58: std::cout << "Fifty eight"; break;
	case 59: std::cout << "Fifty nine"; break;

	case 60: std::cout << "Sixty "; break;
	case 61: std::cout << "Sixty one"; break;
	case 62: std::cout << "Sixty two"; break;
	case 63: std::cout << "Sixty three"; break;
	case 64: std::cout << "Sixty four"; break;
	case 65: std::cout << "Sixty five"; break;
	case 66: std::cout << "Sixty six"; break;
	case 67: std::cout << "Sixty seven"; break;
	case 68: std::cout << "Sixty eight"; break;
	case 69: std::cout << "Sixty nine"; break;

	case 70: std::cout << "Seventy "; break;
	case 71: std::cout << "Seventy one"; break;
	case 72: std::cout << "Seventy two"; break;
	case 73: std::cout << "Seventy three"; break;
	case 74: std::cout << "Seventy four"; break;
	case 75: std::cout << "Seventy five"; break;
	case 76: std::cout << "Seventy six"; break;
	case 77: std::cout << "Seventy seven"; break;
	case 78: std::cout << "Seventy eight"; break;
	case 79: std::cout << "Seventy nine"; break;

	case 80: std::cout << "Eighty "; break;
	case 81: std::cout << "Eighty one"; break;
	case 82: std::cout << "Eighty two"; break;
	case 83: std::cout << "Eighty three"; break;
	case 84: std::cout << "Eighty four"; break;
	case 85: std::cout << "Eighty five"; break;
	case 86: std::cout << "Eighty six"; break;
	case 87: std::cout << "Eighty seven"; break;
	case 88: std::cout << "Eighty eight"; break;
	case 89: std::cout << "Eighty nine"; break;

	case 90: std::cout << "Ninety "; break;
	case 91: std::cout << "Ninety one"; break;
	case 92: std::cout << "Ninety two"; break;
	case 93: std::cout << "Ninety three"; break;
	case 94: std::cout << "Ninety four"; break;
	case 95: std::cout << "Ninety five"; break;
	case 96: std::cout << "Ninety six"; break;
	case 97: std::cout << "Ninety seven"; break;
	case 98: std::cout << "Ninety eight"; break;
	case 99: std::cout << "Ninety nine"; break;
	case 100:std::cout << "One hundred"; break;
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	if (isValid(a))
	{
		printNumber(a);
	}
	else
	{
		std::cout << "Invalid input.\n";
	}
	return 0;
}