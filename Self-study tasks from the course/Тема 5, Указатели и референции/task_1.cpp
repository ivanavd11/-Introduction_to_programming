#include <iostream>

int main()
{
  
        int a = 8;
        int& b = a;

        std::cout << a << " " << b << "\n";
        b = 3;

        std::cout << a << " " << b;

        return 0;

}