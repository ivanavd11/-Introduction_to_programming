#include <iostream>

// ���������� ������� �� �������� ���� ����� � ���������
bool isPalindrome(const char str[], int left, int right) {
    if (left >= right) {
        return true; // ��� ��� ��������� ������ �������, ���� � ���������
    }

    if (str[left] != str[right]) {
        return false; // ��� ��� ������������, �� � ���������
    }

    // ����������� ���������� ������ �������
    return isPalindrome(str, left + 1, right - 1);
}

int main()
{
	char str[] = "abcbia";
	int size = 6;
	std::cout << isPalindrome(str,0,size-1);
	return 0;
}