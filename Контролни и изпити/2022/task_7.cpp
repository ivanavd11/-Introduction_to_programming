//#include <iostream>
//
//int myStrLen(char* str)
//{
//	if (!str)
//		return -1;
//	int len = 0;
//	while (*str)
//	{
//		str++;
//		len++;
//	}
//	return len;
//
//}
//
//char* encodeWord(char* str, int N)
//{
//	if (!str || N < 2 || N>49)
//		return nullptr;
//	int len = myStrLen(str);
//	char* result = new char[len + 1];
//
//	for (int i = 0; i < len; i++)
//	{
//		char ch = str[i];
//		int cod = ch - '\0';
//		int newCod = cod + N;
//		if (newCod > 126)
//		{
//			newCod = newCod - 127 + 32;
//		}
//
//		result[i] = newCod + '\0';
//	}
//	result[len] = '\0';
//
//	return result;
//}
//
//int main()
//{
//	char input[] = "Test123!";
//	int N = 10;
//	char* encoded = encodeWord(input, N);
//	std::cout << encoded;
//	delete[] encoded;
//	return 0;
//}