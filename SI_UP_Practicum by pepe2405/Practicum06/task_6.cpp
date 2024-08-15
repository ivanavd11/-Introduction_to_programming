#include <iostream>

void newArray(int* result, int& resultSize, int* arr1, int size1, int* arr2, int size2)
{
    int k = 0; // Индекс за резултантния масив

    // Намиране на общите елементи
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                // Проверка дали елементът вече е добавен
                bool found = false;
                for (int l = 0; l < k; ++l) {
                    if (result[l] == arr1[i]) {
                        found = true;
                        break;
                    }
                }
                // Ако елементът не е добавен, го добавяме към резултата
                if (!found) {
                    result[k++] = arr1[i];
                }
                break;
            }
        }
    }

    resultSize = k; // Обновяваме размера на резултантния масив
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }
}
int main()
{
	int arr1[] = { 2,4,1,3,7,8 };
	int arr2[] = { 1,2,3,5 };
	int size1 = sizeof(arr1) / sizeof(int);
	int size2 = sizeof(arr2) / sizeof(int);

	int result[100] = {};
	int resultSize = 0;

    newArray(result, resultSize, arr1, size1, arr2, size2);
    selectionSort(result, resultSize);

    for (int i = 0; i < resultSize; i++)
    {
        std::cout << result[i] << " ";
    }
	return 0;
}