//#include <iostream>
//
//int myStrLen(const char* str)
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
//}
//
//bool doExist(const char* symbols, const char* word)
//{
//	if (!symbols || !word)
//		return false;
//
//	int symbolsLen = myStrLen(symbols);
//	int wordLen = myStrLen(word);
//	if (symbolsLen < wordLen)
//		return -1;
//
//	for (int i = symbolsLen - 1; i >= 0; i--)
//	{
//		if (symbols[i] == word[0])
//		{
//			i--;
//			int wordSize = 1;
//			while (word[wordSize]!='\0')
//			{
//				if (symbols[i] != word[wordSize])
//				{
//					i++;
//					break;
//				}
//				i--;
//				wordSize++;
//			}
//			if (wordSize == wordLen)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//
//}
//
//int main()
//{
//	const char* symbols = "This iiiisssiissss an example";
//	const char* word = "ssssiii";
//	std::cout << doExist(symbols, word);
//	return 0;
//}