#include <iostream>

long convertNumber(char* num) 
{
    if (num == nullptr || strlen(num) < 3) 
    {
        return -1;
    }

    int firstMax = 0, secondMax = 0, thirdMax = 0;

    for (int i = 0; num[i] != '\0'; i++) 
    {
        int current = num[i] -'\0';

        if (current > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = current;
        }
        else if (current > secondMax) 
        {
            thirdMax = secondMax;
            secondMax = current;
        }
        else if (current > thirdMax)
        {
            thirdMax = current;
        }
    }

    return firstMax + secondMax + thirdMax;
}

int main()
{
    char str[] = "15964";
    std::cout << convertNumber(str);
	return 0;
}