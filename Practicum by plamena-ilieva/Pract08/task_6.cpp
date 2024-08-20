#include <iostream>

int countOnes(int n) {

    int count = 0;
    while (n > 0) 
    {
        count += n & 1; 
        n >>= 1;        
    }
    return count;
}


bool areBitsPermutation(int a, int b) {
  
    int countA = countOnes(a);
    int countB = countOnes(b);

    return countA == countB;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
    if (areBitsPermutation(a, b)) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
	return 0;
}