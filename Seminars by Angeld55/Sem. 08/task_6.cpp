#include <iostream>

void printSubsets(int arr[], int n)
{
    int subsetCount = 1 << n; // 2^n подмножества

    for (int i = 0; i < subsetCount; i++) {
        std::cout << "{";
        bool first = true;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // Проверяваме дали j-тият бит е 1
                if (!first) {
                    std::cout << ", ";
                }
                std::cout << arr[j];
                first = false;
            }
        }
        std::cout << "}" << std::endl;
    }
}

int main() {
    int arr1[] = { 1, 2, 3 };  // Първи пример
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 5, 3 };     // Втори пример
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Subsets of [1, 2, 3]:" << std::endl;
    printSubsets(arr1, n1);

    std::cout << "\nSubsets of [5, 3]:" << std::endl;
    printSubsets(arr2, n2);

    return 0;
}