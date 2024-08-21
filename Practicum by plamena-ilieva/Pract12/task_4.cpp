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

char** zigZag(char* str, int numRows, int& numCols)
{
	if (!str)
		return nullptr;
	int len = myStrLen(str);
    int cycleLen = 2 * numRows - 2;

    // ����������� �� ���� �� ��������
    numCols = (len / cycleLen) * (numRows - 1) + (len % cycleLen <= numRows ? 1 : (len % cycleLen - numRows + 1));

    // �������� �� ����� �� ���������
    char** matrix = new char* [numRows];
    for (int i = 0; i < numRows; i++) {
        matrix[i] = new char[numCols];
        std::fill(matrix[i], matrix[i] + numCols, ' '); 
    }

    int row = 0, col = 0;
    for (int i = 0; i < len; ++i) {
        matrix[row][col] = str[i];

        // ���������� �� ���������� �������
        if (i % cycleLen < numRows - 1) {
            row++; // ������� ������ �� ��������
        }
        else {
            row--; col++; // �������� ������ �� ��������
        }
    }

    return matrix;
}

void printZigzagMatrix(char** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    char str[] = "PAYPALISHIRING";
    int numRows = 3;
    int numCols = 0;

    char** matrix = zigZag(str, numRows, numCols);

    // ���������� �� ���������
    printZigzagMatrix(matrix, numRows, numCols);

    // ������������� �� ���������� �����
    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}