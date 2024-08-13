#include <iostream>

// Рекурсивна функция за добавяне на елемент в сортиран масив
void insertInSortedArray(int arr[], int n, int x) {
    // Ако сме достигнали края на масива или намерим подходящото място
    if (n == 0 || arr[n - 1] <= x) {
        arr[n] = x;
        return;
    }

    // Преместваме текущия елемент на следващата позиция
    int lastElement = arr[n - 1];
    insertInSortedArray(arr, n - 1, x);
    arr[n] = lastElement;
}

int main() {
    int n, x;
    std::cin >> n;

    int arr[100];  // Предполагаме, че масивът има достатъчно място за нов елемент
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cin >> x;

    insertInSortedArray(arr, n, x);

    for (int i = 0; i <= n; i++) {  // Отпечатваме n+1 елемента
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}