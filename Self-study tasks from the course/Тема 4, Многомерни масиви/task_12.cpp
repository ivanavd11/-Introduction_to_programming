#include <iostream>

int main()
{
    const int N = 4, M = 4;
    int arr[N][M] = {
        {1  ,5   ,7,    4},
        {1,  0,  -4,    2},
        {-6, -5, -100, -5},
        {12, 64, 8,    -6}
    };

    int arr2[N][M] = {
        {-1, 5 ,5, 5},
        {5, 1, 0, 0},
        {5, 0, 1, 2},
        {5, 0, 2, 1}
    };

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr2[i][j] != arr2[j][i])
            {
                std::cout << "No\n";
                return 0;
            }
        }
    }
    std::cout << "Yes\n";
	return 0;
}