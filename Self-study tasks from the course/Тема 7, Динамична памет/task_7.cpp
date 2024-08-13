#include <iostream>
#include <cstring> // За std::strcmp и std::sprintf


 //Функция за преобразуване на число в низ
void intToStr(int num, char* str) {
    std::sprintf(str, "%d", num);
}

 //Функция за сравнение на низове (лексикографски)
int compareStrings(const char* str1, const char* str2) {
    return std::strcmp(str1, str2);
}

void myStrcpy(const char* source, char* dest)
{
    if (!source || !dest)
        return;
    while (*source)
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

 //Функция за сортиране на масив от числа по лексикографски ред
void sortLex(const int n, int* a) {
     //Преобразуваме числата в низове
    char strArray[10][12]; // Максимална дължина на низ, за да се поберат числа до 10^10
    for (int i = 0; i < n; ++i) {
        intToStr(a[i], strArray[i]);
    }

    // Лексикографска сортиране на низовете с метода на избора
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (compareStrings(strArray[i], strArray[j]) > 0) {
                // Размяна на елементите
                char temp[12];
                myStrcpy(temp, strArray[i]);
                myStrcpy(strArray[i], strArray[j]);
                myStrcpy(strArray[j], temp);
            }
        }
    }

     //Преобразуване на низовете обратно в числа
    for (int i = 0; i < n; ++i) {
        a[i] = std::atoi(strArray[i]);
    }
}

int main()
{
    int a[] = { 13, 14, 7, 2018, 9, 0 };
    int n = sizeof(a) / sizeof(a[0]);

    sortLex(n, a);

    // Извеждане на сортирания масив
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

	return 0;
}