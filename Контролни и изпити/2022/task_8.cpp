//#include <iostream>
//
//int myStrLen(char* str)
//{
//	if (!str)
//		return 0;
//	int len = 0;
//	while (*str)
//	{
//		str++;
//		len++;
//	}
//	return len;
//}
//
//int CheckDate(char* str)
//{
//	if (!str)
//		return -1;
//
//	int len = myStrLen(str);
//	if (len != 10)
//	{
//		return -1;
//	}
//
//	int day = 0;
//	int mount = 0;
//	int year = 0;
//	day = (str[0]-'0') * 10 + str[1]-'0';
//	mount = (str[3] - '0') * 10 + str[4] - '0';
//	year = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + str[9] - '0';
//
//	if (str[2] != '.' || str[5] != '.')
//		return -1;
//
//	if (day <= 0 || day > 31 || mount < 1 || mount>12 || year < 1)
//		return -1;
//
//	if (mount == 4 || mount == 6 || mount == 9 || mount == 11)
//	{
//		if (day == 31)
//			return -1;
//	}
//
//	if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
//	{
//		if (day == 29 && mount == 2)
//			return 1;
//	}
//
//	else if (mount == 2 && day > 28)
//		return -1;
//
//	return 1;
//}
//
//int main()
//{
//	char str[] = "29.02.2017";
//	std::cout << CheckDate(str);
//	return 0;
//}