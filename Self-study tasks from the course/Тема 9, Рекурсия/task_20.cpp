#include <iostream>

using namespace std;

// ������� �� �������� �� ���� �� ������
const char* findWordEnd(const char* start, const char* end) {
    while (start < end && (*start > 32)) {
        ++start;
    }
    return start;
}

// ������� �� �������� �� �������� �� ������
const char* findWordStart(const char* start, const char* begin) {
    while (start > begin && (*(start - 1) > 32)) {
        --start;
    }
    return start;
}

// ���������� ������� �� ��������� �� ������ � ������� ���
void print_backwards(const char* begin, const char* end) {
    if (begin >= end) {
        return; // ��� ���� ���� �� ���������, ������� ��
    }

    // �������� ���� �� ���������� ����
    const char* wordEnd = findWordEnd(end - 1, end);

    if (wordEnd == end) {
        // ���� ����, ����� �� ������� �� ����
        print_backwards(begin, end - 1); // ������������ ��� ��������
    }
    else {
        // �������� �������� �� ���������� ����
        const char* wordStart = findWordStart(wordEnd, begin);

        // ��������� ������
        cout.write(wordStart, wordEnd - wordStart) << " ";

        // ������������ � ��������
        print_backwards(begin, wordStart - 1);
    }
}

int main() {
    const char* text = "I need a break!";
    print_backwards(text, text + strlen(text));
    return 0;
}