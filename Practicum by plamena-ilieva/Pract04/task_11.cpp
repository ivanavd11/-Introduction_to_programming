#include <iostream>

bool isTriangleInCircle(int x1, int y1, int x2, int y2, int x3, int y3, int r) {
    // Изчисляване на квадрата на радиуса
    int r_squared = r * r;

    // Изчисляване на квадратите на разстоянията до центъра
    int dist1_squared = x1 * x1 + y1 * y1;
    int dist2_squared = x2 * x2 + y2 * y2;
    int dist3_squared = x3 * x3 + y3 * y3;

    // Проверка дали всички разстояния са по-малки или равни на квадрата на радиуса
    return (dist1_squared <= r_squared) && (dist2_squared <= r_squared) && (dist3_squared <= r_squared);
}

int main()
{
	int x1, x2, x3, y1, y2, y3, r;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;
    if(isTriangleInCircle(x1, y1, x2, y2, x3, y3, r)) {
        std::cout << "true\n";
    }
    else {
        std::cout << "false\n";
    }
	return 0;
}