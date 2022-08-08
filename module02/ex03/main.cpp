//
// Created by Attack Cristina on 08.08.2022.
//

#include <iostream>
#include "Point.h"

int main(void) {
    Point a(0, 17);
    Point b(14, 5);
    Point c(5, 3);

    Point point(5, 5);

    std::cout << (bsp(a, b, c, point) ? "A point is inside of a triangle" : "A point is not inside of a triangle") << std::endl;

    show(a, b, c, point);

    return 0;
}