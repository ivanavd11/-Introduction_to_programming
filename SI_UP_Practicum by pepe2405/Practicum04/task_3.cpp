#include <iostream>

int concatInt(int n, int m)
{
    int temp = m;

    while (temp > 0) {
        n *= 10;
        temp /= 10;
    }

    return n + m;

}
int main()
{
	int n, m;
	std::cin >> n >> m;
    std::cout << concatInt(n, m);
	return 0;
}