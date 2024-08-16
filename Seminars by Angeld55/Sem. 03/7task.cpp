#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n % 2 != 0)
	{
        for (int i = n; i > 0; i -= 2)
        {
            int whiteSpacesCount = (n - i) / 2;
            for (int j = 0; j < whiteSpacesCount; j++)
            {
                std::cout << ' ';
            }

            for (int j = 0; j < i; j++)
            {
                std::cout << '*';
            }

            std::cout << std::endl;
        }

        for (size_t i = 3; i <= n; i += 2)
        {
            int whiteSpacesCount = (n - i) / 2;

            for (int j = 0; j < whiteSpacesCount; j++)
            {
                std::cout << ' ';
            }

            for (int j = 0; j < i; j++)
            {
                std::cout << '*';
            }

            std::cout << std::endl;
        }
	}
	else
	{
		std::cout << "The number isn't odd.";
	}
	return 0;
}