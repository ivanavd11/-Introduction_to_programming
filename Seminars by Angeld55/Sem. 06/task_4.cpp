#include <iostream>

// Функция за проверка дали даден подмасив е палиндром
bool isPalindrome(int arr[], int start, int end) {
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Функция за проверка дали масивът може да бъде разделен на два палиндромни подмасива
bool isConcatenationOfPalindromes(int arr[], int n) {
    // Опитваме се да разделим масива на два подмасива
    for (int i = 0; i < n - 1; i++) {
        // Първи подмасив: от 0 до i, Втори подмасив: от i+1 до n-1
        if (isPalindrome(arr, 0, i) && isPalindrome(arr, i + 1, n - 1)) {
            return true;
        }
    }
    // Също проверяваме дали целият масив е палиндром
    return isPalindrome(arr, 0, n - 1);
}

int main() {
    int arr1[] = { 1, 2, 3, 2, 1, 4, 5, 5, 4 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 1, 2, 3, 4, 5 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = { 1, 2, 3, 2, 1 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Array 1: " << (isConcatenationOfPalindromes(arr1, n1) ? "true" : "false") << std::endl;
    std::cout << "Array 2: " << (isConcatenationOfPalindromes(arr2, n2) ? "true" : "false") << std::endl;
    std::cout << "Array 3: " << (isConcatenationOfPalindromes(arr3, n3) ? "true" : "false") << std::endl;

    return 0;
}