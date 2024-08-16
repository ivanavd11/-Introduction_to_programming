#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

    for (int i = -100; i <= 100; i++)
    {
        int res = a * i * i * i * i +
            b * i * i * i +
            c * i * i +
            d * i +
            e;

        if (res >= 0)
            std::cout << i << " ";
    }

	return 0;
}