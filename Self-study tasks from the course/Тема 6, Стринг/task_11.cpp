#include <iostream>

const int max_size = 100;

int strLen(char* str)
{
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

// ������� �� ���������� �� ��� ����
int my_strcmp(const char* str1, const char* str2) {
	while (*str1 && (*str1 == *str2)) {
		str1++;
		str2++;
	}
	return *(unsigned char*)str1 - *(unsigned char*)str2;
}

// ������� �� �������� �� ���� ��� � ����
void my_strcpy(char* dest, const char* src)
{
	while ((*dest++ = *src++) != '\0');
}

int main()
{
    const int MAX_SIZE = 100;  // ���������� ���� �������� � ��������
    char numbers[MAX_SIZE][20]; // ����� �� ������ (���������� ������� �� ����� ��� � 19 �������)
    int n;

    // ��������� �� ���� �� ����������
    std::cin >> n;

    // ��������� �� ������� ���� ������
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // ��������� �� ������� (��������� � ���������)
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (my_strcmp(numbers[j], numbers[j + 1]) > 0) {
                // ��������� numbers[j] � numbers[j + 1]
                char temp[20];
                my_strcpy(temp, numbers[j]);
                my_strcpy(numbers[j], numbers[j + 1]);
                my_strcpy(numbers[j + 1], temp);
            }
        }
    }

    // ��������� �� ����������� �����
    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}