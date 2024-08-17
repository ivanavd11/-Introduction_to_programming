#include <iostream>

int getBit(int num, int pos) 
{
    // Изместване на битовете надясно с pos позиции и прилагане на побитово AND с 1
    return (num >> pos) & 1;
}

int main() {
    int num = 29; // Например числото 29 в двоична система е 11101
    int pos = 3;  // Проверка на стойността на бита на позиция 3 (броенето започва от 0)

    int bitValue = getBit(num, pos);

    std::cout << bitValue << std::endl;
  

    return 0;
}