#include <iostream>

bool isPalindrome(int arr[], int left, int right) {
    while (left < right) {
        if (arr[left] != arr[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool canBecomePalindrome(int arr[], int n, int maxRemovals) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (arr[left] == arr[right]) {
            left++;
            right--;
        }
        else {
            if (maxRemovals == 0) return false;
            // Опитайте с махане на първия или последния елемент
            return canBecomePalindrome(arr, n - 1, maxRemovals - 1) ||
                canBecomePalindrome(arr + 1, n - 1, maxRemovals - 1);
        }
    }
    return true;
}

const int size = 100;
int main() {
    int n, k;
    std::cin >> n;

    int arr[size];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }


    std::cin >> k;

    if (canBecomePalindrome(arr, n, k)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}