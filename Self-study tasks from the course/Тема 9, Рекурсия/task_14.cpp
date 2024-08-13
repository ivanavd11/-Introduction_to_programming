#include <iostream>

// Рекурсивна функция за проверка дали низът е палиндром
bool isPalindrome(const char str[], int left, int right) {
    if (left >= right) {
        return true; // Ако сме проверили всички символи, това е палиндром
    }

    if (str[left] != str[right]) {
        return false; // Ако има несъвпадение, не е палиндром
    }

    // Проверяваме следващата двойка символи
    return isPalindrome(str, left + 1, right - 1);
}

int main()
{
	char str[] = "abcbia";
	int size = 6;
	std::cout << isPalindrome(str,0,size-1);
	return 0;
}