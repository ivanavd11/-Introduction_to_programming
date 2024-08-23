//#include <iostream>
//
//int counterOfDigit(int n)
//{
//	int counter = 0;
//	while (n != 0)
//	{
//		n /= 10;
//		counter++;
//	}
//	return counter;
//}
//
//int checkNum(long N)
//{
//	if (N >= 109)
//		return -1;
//
//    long originalN = N;
//    int totalSum = 0;
//    int digitCount = 0;
//
//   
//    while (N > 0) {
//        int digit = N % 10;
//        totalSum += digit;
//        N /= 10;
//        digitCount++;
//    }
//
//    N = originalN;
//
//    
//    for (int i = digitCount; i >= 1; --i) {
//        int digit = N % 10;
//        int newSum = totalSum - digit;
//
//        if (newSum % 3 == 0) {
//            return i;
//        }
//
//        N /= 10;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    long number = 26;
//    std::cout<< checkNum(number);
//	return 0;
//}