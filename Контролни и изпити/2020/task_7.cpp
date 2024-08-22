
#include <iostream>

int countDigits(long N) {
    int count = 0;
    while (N > 0) {
        N /= 10;
        count++;
    }
    return count;
}

void extractDigits(long N, int* digits, int size) {
    for (int i = size - 1; i >= 0; i--) {
        digits[i] = N % 10;
        N /= 10;
    }
}

void sortDigits(int* digits, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (digits[i] > digits[j]) {
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
}

int AnalyzeNum(long N) {
    if (N < 0) {
        N = -N; 
    }

    int size = countDigits(N);
    if (size < 3) {
        return -1; 
    }

    int* digits = new int[size];
    extractDigits(N, digits, size);
    sortDigits(digits, size);

    int midIndex = size / 2;
    int midDigit = digits[midIndex];

    int smallerCount = 0;
    int greaterCount = 0;

    for (int i = 0; i < size; i++) {
        if (digits[i] < midDigit) {
            smallerCount++;
        }
        else if (digits[i] > midDigit) {
            greaterCount++;
        }
    }

    delete[] digits;

    if (smallerCount == greaterCount) {
        return midDigit;
    }
    else {
        return -1;
    }
}


int main()
{
    std::cout << AnalyzeNum(5672141) << std::endl;
	return 0;
}