#include <iostream>

int myStrLen(char* str)
{
    if (!str)
        return 0;
    int len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return len;
}


void replaceInPlace(char* text, char* where, char* what) 
{
    int lenText = myStrLen(text);
    int lenWhere = myStrLen(where);
    int lenWhat = myStrLen(what);

    if (lenWhere == 0 || lenText == 0) return;

    for (int i = 0; i <= lenText - lenWhere; ++i) {
        bool match = true;

        // �������� ���� where �� ������ � �������� ������� �� ������
        for (int j = 0; j < lenWhere; ++j) {
            if (text[i + j] != where[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            // ��� 'what' � ��-��� �� 'where'
            if (lenWhat < lenWhere) {
                for (int j = 0; j < lenWhat; ++j) {
                    text[i + j] = what[j];
                }
                // ������� �� ���������� ���� �� ������ ������
                for (int j = i + lenWhat; j <= lenText - (lenWhere - lenWhat); ++j) {
                    text[j] = text[j + (lenWhere - lenWhat)];
                }
                lenText -= (lenWhere - lenWhat);
                text[lenText] = '\0';
            }
            // ��� 'what' � ��-����� �� 'where'
            else if (lenWhat > lenWhere) {
                // ������� �� ���������� ���� �� ������ �������
                for (int j = lenText; j >= i + lenWhere; --j) {
                    text[j + (lenWhat - lenWhere)] = text[j];
                }
                for (int j = 0; j < lenWhat; ++j) {
                    text[i + j] = what[j];
                }
                lenText += (lenWhat - lenWhere);
            }
            // ��� 'what' � 'where' �� � ������� �������
            else {
                for (int j = 0; j < lenWhat; ++j) {
                    text[i + j] = what[j];
                }
            }
            i += lenWhat - 1;
        }
    }
}

int main() {
    char text[100] = "I am the best of the best";
    char where[] = "best";
    char what[] = "worst";

    replaceInPlace(text, where, what);
    std::cout << text << std::endl;  // Output: "I am the worst of the worst"

    return 0;
}