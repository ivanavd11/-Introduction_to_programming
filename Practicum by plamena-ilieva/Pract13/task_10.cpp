#include <iostream>

void bubbleSortAscending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void pairGuests(int* heights, int size) {
    int boysCount = 0, girlsCount = 0;

    
    int* boys = new int[size];
    int* girls = new int[size];

    for (int i = 0; i < size; i++) {
        if (heights[i] % 2 == 0) {
            girls[girlsCount++] = heights[i];
        }
        else {
            boys[boysCount++] = heights[i];
        }
    }

    bubbleSortAscending(boys, boysCount);
    bubbleSortAscending(girls, girlsCount);

    for (int i = 0; i < boysCount && i < girlsCount; i++) {
        std::cout << boys[i] << " " << girls[i] << std::endl;
    }

    delete[] boys;
    delete[] girls;
}

int main() {
    int heights[] = { 201, 186, 180, 186, 183, 185, 170, 161, 194, 197, 164, 175, 161, 186 };
    int size = sizeof(heights) / sizeof(heights[0]);

    pairGuests(heights, size);

    return 0;
}