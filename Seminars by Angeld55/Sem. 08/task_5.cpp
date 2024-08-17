#include <iostream>

bool isInNumber(int n, int k)
{
    // Броим битовете в k
    int kBits = 0;
    int tempK = k;

    while (tempK > 0) {
        kBits++;
        tempK >>= 1;
    }

    // Използваме маска за извличане на битовете от n, които да сравняваме с k
    int mask = (1 << kBits) - 1;

    while (n >= k) {
        if ((n & mask) == k) {
            return true;
        }
        n >>= 1;
    }

    return false;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	if (isInNumber(n, k))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}