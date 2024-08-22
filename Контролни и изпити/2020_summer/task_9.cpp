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

void intToStr(int num, char* buffer) 
{
    int i = 0;
    int temp = num;

    // Броим цифрите
    do {
        i++;
        temp /= 10;
    } while (temp != 0);

    buffer[i] = '\0';

    // Преобразуваме числото в низ
    do {
        i--;
        buffer[i] = (num % 10) + '0';
        num /= 10;
    } while (num != 0);
}


char* Encode(char *str)
{
	if (!str)
		return nullptr;

	int len = myStrLen(str);
    int resultLen = 0;

    for (int i = 0; i < len; i++) {
        int num = (str[i]) -'\0';
        int temp = num;
        do {
            resultLen++;
            temp /= 10;
        } while (temp != 0);
        if (i < len - 1) {
            resultLen++; 
        }
    }

    char* result = new char[resultLen + 1]; 
    int position = 0;

    for (int i = 0; i < len; i++) {
        char buffer[5]; 
        intToStr(str[i] - '\0', buffer);

        int j = 0;
        while (buffer[j] != '\0') {
            result[position++] = buffer[j++];
        }

        if (i < len - 1) {
            result[position++] = '_';
        }
    }

    result[position] = '\0'; 

    return result;
}

int main()
{
    char text[] = "abc";
    char* encodedText = Encode(text);
    std::cout << encodedText << std::endl;
    delete[] encodedText;

	return 0;
}