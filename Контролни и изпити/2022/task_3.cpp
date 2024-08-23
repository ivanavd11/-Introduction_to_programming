//#include <iostream>
//
//unsigned int gcd(unsigned int a, unsigned int b) {
//    while (b != 0) 
//    {
//        unsigned int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//unsigned int getGCD(const unsigned int* arr, size_t len)
//{
//    if (!arr || len== 0) {
//        return 0; 
//    }
//
//    unsigned int result = arr[0];
//    for (size_t i = 1; i < len; ++i) {
//        result = gcd(result, arr[i]);
//        if (result == 1) 
//        {
//            return 1; 
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    unsigned int arr[] = { 48, 64, 256, 32 };
//    int len = 4;
//    std::cout << getGCD(arr, len);
//	return 0;
//}